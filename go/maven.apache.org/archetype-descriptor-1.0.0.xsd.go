// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Archetypedescriptor ...
type Archetypedescriptor *ArchetypeDescriptor

// RequiredProperties ...
type RequiredProperties struct {
	XMLName          xml.Name            `xml:"requiredProperties"`
	RequiredProperty []*RequiredProperty `xml:"requiredProperty"`
}

// FileSets ...
type FileSets struct {
	XMLName xml.Name   `xml:"fileSets"`
	FileSet []*FileSet `xml:"fileSet"`
}

// Modules ...
type Modules struct {
	XMLName xml.Name            `xml:"modules"`
	Module  []*ModuleDescriptor `xml:"module"`
}

// ArchetypeDescriptor ...
type ArchetypeDescriptor struct {
	NameAttr           string              `xml:"name,attr,omitempty"`
	PartialAttr        bool                `xml:"partial,attr,omitempty"`
	RequiredProperties *RequiredProperties `xml:"requiredProperties"`
	FileSets           *FileSets           `xml:"fileSets"`
	Modules            *Modules            `xml:"modules"`
}

// Includes ...
type Includes struct {
	XMLName xml.Name `xml:"includes"`
	Include []string `xml:"include"`
}

// Excludes ...
type Excludes struct {
	XMLName xml.Name `xml:"excludes"`
	Exclude []string `xml:"exclude"`
}

// FileSet ...
type FileSet struct {
	FilteredAttr bool      `xml:"filtered,attr,omitempty"`
	PackagedAttr bool      `xml:"packaged,attr,omitempty"`
	EncodingAttr string    `xml:"encoding,attr,omitempty"`
	Directory    string    `xml:"directory"`
	Includes     *Includes `xml:"includes"`
	Excludes     *Excludes `xml:"excludes"`
}

// RequiredProperty ...
type RequiredProperty struct {
	KeyAttr      string `xml:"key,attr,omitempty"`
	DefaultValue string `xml:"defaultValue"`
}

// ModuleDescriptor ...
type ModuleDescriptor struct {
	IdAttr   string    `xml:"id,attr,omitempty"`
	DirAttr  string    `xml:"dir,attr,omitempty"`
	NameAttr string    `xml:"name,attr,omitempty"`
	FileSets *FileSets `xml:"fileSets"`
	Modules  *Modules  `xml:"modules"`
}