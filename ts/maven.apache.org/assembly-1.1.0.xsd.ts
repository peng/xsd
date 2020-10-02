// Code generated by xgen. DO NOT EDIT.

export type Assembly = Assembly;

export class Formats {
	Format: string;
}

export class ContainerDescriptorHandlers {
	ContainerDescriptorHandler: Array<ContainerDescriptorHandlerConfig>;
}

export class ModuleSets {
	ModuleSet: Array<ModuleSet>;
}

export class FileSets {
	FileSet: Array<FileSet>;
}

export class Files {
	File: Array<FileItem>;
}

export class DependencySets {
	DependencySet: Array<DependencySet>;
}

export class Repositories {
	Repository: Array<Repository>;
}

export class ComponentDescriptors {
	ComponentDescriptor: string;
}

export class Assembly {
	Id: string;
	Formats: Formats;
	IncludeBaseDirectory: boolean;
	BaseDirectory: string;
	IncludeSiteDirectory: boolean;
	ContainerDescriptorHandlers: ContainerDescriptorHandlers;
	ModuleSets: ModuleSets;
	FileSets: FileSets;
	Files: Files;
	DependencySets: DependencySets;
	Repositories: Repositories;
	ComponentDescriptors: ComponentDescriptors;
}

export class ContainerDescriptorHandlerConfig {
	HandlerName: string;
}

export class GroupVersionAlignments {
	GroupVersionAlignment: Array<GroupVersionAlignment>;
}

export class Includes {
	Include: string;
}

export class Excludes {
	Exclude: string;
}

export class Repository {
	IncludeMetadata: boolean;
	GroupVersionAlignments: GroupVersionAlignments;
	Scope: string;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}

export class GroupVersionAlignment {
	Id: string;
	Version: string;
	Excludes: Excludes;
}

export class FileItem {
	Source: string;
	OutputDirectory: string;
	DestName: string;
	FileMode: string;
	LineEnding: string;
	Filtered: boolean;
}

export class FileSet {
	Directory: string;
	LineEnding: string;
	Filtered: boolean;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}

export class ModuleSet {
	IncludeSubModules: boolean;
	Includes: Includes;
	Excludes: Excludes;
	Sources: ModuleSources;
	Binaries: ModuleBinaries;
}

export class ModuleSources {
	FileSets: FileSets;
	IncludeModuleDirectory: boolean;
	ExcludeSubModuleDirectories: boolean;
	OutputDirectoryMapping: string;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}

export class ModuleBinaries {
	AttachmentClassifier: string;
	IncludeDependencies: boolean;
	DependencySets: DependencySets;
	Unpack: boolean;
	UnpackOptions: UnpackOptions;
	OutputFileNameMapping: string;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}

export class UnpackOptions {
	Includes: Includes;
	Excludes: Excludes;
	Filtered: boolean;
}

export class DependencySet {
	OutputFileNameMapping: string;
	Unpack: boolean;
	UnpackOptions: UnpackOptions;
	Scope: string;
	UseProjectArtifact: boolean;
	UseProjectAttachments: boolean;
	UseTransitiveDependencies: boolean;
	UseTransitiveFiltering: boolean;
	UseStrictFiltering: boolean;
	UseDefaultExcludes: boolean;
	OutputDirectory: string;
	Includes: Includes;
	Excludes: Excludes;
	FileMode: string;
	DirectoryMode: string;
}