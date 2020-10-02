// Code generated by xgen. DO NOT EDIT.

package schema

import (
	"encoding/xml"
)

// Book ...
type Book *BookModel

// Chapters ...
type Chapters struct {
	XMLName xml.Name   `xml:"chapters"`
	Chapter []*Chapter `xml:"chapter"`
}

// BookModel ...
type BookModel struct {
	Id       string    `xml:"id"`
	Title    string    `xml:"title"`
	Author   string    `xml:"author"`
	Date     string    `xml:"date"`
	Chapters *Chapters `xml:"chapters"`
}

// Sections ...
type Sections struct {
	XMLName xml.Name   `xml:"sections"`
	Section []*Section `xml:"section"`
}

// Chapter ...
type Chapter struct {
	Id       string    `xml:"id"`
	Title    string    `xml:"title"`
	Sections *Sections `xml:"sections"`
}

// Section ...
type Section struct {
	Id    string `xml:"id"`
	Title string `xml:"title"`
	File  string `xml:"file"`
}