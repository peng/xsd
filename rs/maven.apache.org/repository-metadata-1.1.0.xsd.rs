// Code generated by xgen. DO NOT EDIT.

#[macro_use]
extern crate serde_derive;
extern crate serde;
extern crate serde_xml_rs;

use serde_xml_rs::from_reader;


// metadata is 1.0.0+
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct metadata {
	#[serde(rename = "metadata")]
	pub metadata: Metadata,
}


// Plugins ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Plugins {
	#[serde(rename = "plugin")]
	pub plugin: Vec<Plugin>,
}


// Metadata is Versioning information for the artifact.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Metadata {
	#[serde(rename = "modelVersion")]
	pub model_version: Option<String>,
	#[serde(rename = "groupId")]
	pub group_id: String,
	#[serde(rename = "artifactId")]
	pub artifact_id: String,
	#[serde(rename = "version")]
	pub version: String,
	#[serde(rename = "versioning")]
	pub versioning: Versioning,
	#[serde(rename = "plugins")]
	pub plugins: Plugins,
}


// Plugin is The plugin artifactId
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Plugin {
	#[serde(rename = "name")]
	pub name: String,
	#[serde(rename = "prefix")]
	pub prefix: String,
	#[serde(rename = "artifactId")]
	pub artifact_id: String,
}


// Versions ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Versions {
	#[serde(rename = "version")]
	pub version: Vec<String>,
}


// SnapshotVersions ...
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct SnapshotVersions {
	#[serde(rename = "snapshotVersion")]
	pub snapshot_version: Vec<SnapshotVersion>,
}


// Versioning is The current snapshot data in use for this version (artifact snapshots only)
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Versioning {
	#[serde(rename = "latest")]
	pub latest: String,
	#[serde(rename = "release")]
	pub release: String,
	#[serde(rename = "snapshot")]
	pub snapshot: Snapshot,
	#[serde(rename = "versions")]
	pub versions: Versions,
	#[serde(rename = "lastUpdated")]
	pub last_updated: String,
	#[serde(rename = "snapshotVersions")]
	pub snapshot_versions: SnapshotVersions,
}


// SnapshotVersion is The timestamp when this version information was last updated. The timestamp is expressed using UTC in the format yyyyMMddHHmmss.
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct SnapshotVersion {
	#[serde(rename = "classifier")]
	pub classifier: String,
	#[serde(rename = "extension")]
	pub extension: String,
	#[serde(rename = "value")]
	pub value: String,
	#[serde(rename = "updated")]
	pub updated: String,
}


// Snapshot is Whether to use a local copy instead (with filename that includes the base version)
#[derive(Debug, Deserialize, Serialize, PartialEq)]
pub struct Snapshot {
	#[serde(rename = "timestamp")]
	pub timestamp: String,
	#[serde(rename = "buildNumber")]
	pub build_number: i32,
	#[serde(rename = "localCopy")]
	pub local_copy: bool,
}
