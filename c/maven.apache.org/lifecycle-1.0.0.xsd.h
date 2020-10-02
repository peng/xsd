// Code generated by xgen. DO NOT EDIT.

typedef LifecycleConfiguration Lifecycles;

typedef struct {
	Lifecycle Lifecycle[];
} LifecycleConfiguration;

typedef struct {
	Phase Phase[];
} Phases;

typedef struct {
	char Id;
	Phases Phases;
} Lifecycle;

typedef struct {
	Execution Execution[];
} Executions;

typedef struct {
} Configuration;

typedef struct {
	char Id;
	Executions Executions;
	Configuration Configuration;
} Phase;

typedef struct {
	char Goal[];
} Goals;

typedef struct {
	Configuration Configuration;
	Goals Goals;
} Execution;