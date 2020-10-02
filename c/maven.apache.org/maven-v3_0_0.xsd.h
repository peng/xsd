// Code generated by xgen. DO NOT EDIT.

typedef Model Project;

typedef struct {
	MailingList MailingList[];
} MailingLists;

typedef struct {
	Developer Developer[];
} Developers;

typedef struct {
	Contributor Contributor[];
} Contributors;

typedef struct {
	License License[];
} Licenses;

typedef struct {
	Version Version[];
} Versions;

typedef struct {
	Branch Branch[];
} Branches;

typedef struct {
	PackageGroup PackageGroup[];
} PackageGroups;

typedef struct {
	char Report[];
} Reports;

typedef struct {
} Properties;

typedef struct {
	Dependency Dependency[];
} Dependencies;

typedef struct {
	char Extend;
	char PomVersion;
	char Id;
	char GroupId;
	char ArtifactId;
	char Name;
	char CurrentVersion;
	char ShortDescription;
	char Description;
	char Url;
	char Logo;
	char IssueTrackingUrl;
	char InceptionYear;
	char GumpRepositoryId;
	char SiteAddress;
	char SiteDirectory;
	char DistributionSite;
	char DistributionDirectory;
	MailingLists MailingLists;
	Developers Developers;
	Contributors Contributors;
	Licenses Licenses;
	Versions Versions;
	Branches Branches;
	PackageGroups PackageGroups;
	Reports Reports;
	Repository Repository;
	Organization Organization;
	Properties Properties;
	char Package;
	Build Build;
	Dependencies Dependencies;
} Model;

typedef struct {
	SourceModification SourceModification[];
} SourceModifications;

typedef struct {
	Resource Resource[];
} Resources;

typedef struct {
	char NagEmailAddress;
	char SourceDirectory;
	char UnitTestSourceDirectory;
	char AspectSourceDirectory;
	char IntegrationUnitTestSourceDirectory;
	SourceModifications SourceModifications;
	UnitTest UnitTest;
	char DefaultGoal;
	Resources Resources;
} Build;

typedef struct {
	char Include[];
} Includes;

typedef struct {
	char Exclude[];
} Excludes;

typedef struct {
	Resources Resources;
	Includes Includes;
	Excludes Excludes;
} UnitTest;

typedef struct {
	char TargetPath;
	bool Filtering;
	char Directory;
	Includes Includes;
	Excludes Excludes;
} Resource;

typedef struct {
	char ClassName;
	char Property;
	char Directory;
	Includes Includes;
	Excludes Excludes;
} SourceModification;

typedef struct {
	char Name;
	char Url;
	char Logo;
} Organization;

typedef struct {
	char Role[];
} Roles;

typedef struct {
	char Id;
	char Name;
	char Email;
	char Url;
	char Organization;
	char OrganizationUrl;
	Roles Roles;
	char Timezone;
	Properties Properties;
} Developer;

typedef struct {
	char Id;
	char GroupId;
	char ArtifactId;
	char Version;
	char Url;
	char Jar;
	char Type;
	Properties Properties;
} Dependency;

typedef struct {
	char Connection;
	char DeveloperConnection;
	char Url;
} Repository;

typedef struct {
	char Title;
	char Packages;
} PackageGroup;

typedef struct {
	char Name;
	char Tag;
	char Id;
} Version;

typedef struct {
	char Name;
	char Url;
	char Distribution;
	char Comments;
} License;

typedef struct {
	char Name;
	char Email;
	char Url;
	char Organization;
	char OrganizationUrl;
	Roles Roles;
	char Timezone;
	Properties Properties;
} Contributor;

typedef struct {
	char Tag;
} Branch;

typedef struct {
	char OtherArchive[];
} OtherArchives;

typedef struct {
	char Name;
	char Subscribe;
	char Unsubscribe;
	char Post;
	char Archive;
	OtherArchives OtherArchives;
} MailingList;