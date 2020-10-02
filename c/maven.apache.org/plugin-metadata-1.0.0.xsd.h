// Code generated by xgen. DO NOT EDIT.

typedef PluginMetadata PluginMetadata;

typedef struct {
	Mojo Mojo[];
} Mojos;

typedef struct {
	Mojos Mojos;
} PluginMetadata;

typedef struct {
	Component Component[];
} Components;

typedef struct {
	Parameter Parameter[];
} Parameters;

typedef struct {
	char Goal;
	char Phase;
	bool Aggregator;
	char RequiresDependencyResolution;
	bool RequiresProject;
	bool RequiresReports;
	bool RequiresOnline;
	bool InheritByDefault;
	bool RequiresDirectInvocation;
	LifecycleExecution Execution;
	Components Components;
	Parameters Parameters;
	char Description;
	char Deprecated;
	char Call;
} Mojo;

typedef struct {
	char Name;
	char Alias;
	char Property;
	bool Required;
	bool Readonly;
	char Expression;
	char DefaultValue;
	char Type;
	char Description;
	char Deprecated;
} Parameter;

typedef struct {
	char Lifecycle;
	char Phase;
	char Goal;
} LifecycleExecution;

typedef struct {
	char Role;
	char Hint;
} Component;