// Copyright 2020 The xgen Authors. All rights reserved.
//
// DO NOT EDIT: generated by xgen XSD generator
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package schema

import (
	"time"
)

// DepthValueRecorded ...
type DepthValueRecorded struct {
	DepthValue      float64              `xml:"DepthValue"`
	DepthValueUnits *MandatoryStringType `xml:"DepthValueUnits"`
	DepthRelativeTo *MandatoryStringType `xml:"DepthRelativeTo"`
}

// PurgedVolumeRecorded ...
type PurgedVolumeRecorded struct {
	PurgedVolume      float64              `xml:"PurgedVolume"`
	PurgedVolumeUnits *MandatoryStringType `xml:"PurgedVolumeUnits"`
}

// Measurement ...
type Measurement struct {
	DeterminandName *MandatoryStringType `xml:"DeterminandName"`
	ResultType      *MandatoryStringType `xml:"ResultType"`
	ResultValue     float64              `xml:"ResultValue"`
	ResultUnits     *MandatoryStringType `xml:"ResultUnits"`
	Qualifier       *MandatoryStringType `xml:"Qualifier"`
	Comment         string               `xml:"Comment"`
}

// Sample ...
type Sample struct {
	Sampler                        string                `xml:"Sampler"`
	SampleType                     *MandatoryStringType  `xml:"SampleType"`
	CustomerSamplePointName        *MandatoryStringType  `xml:"CustomerSamplePointName"`
	SampleDateTime                 time.Time             `xml:"SampleDateTime"`
	PurposeTypeName                *MandatoryStringType  `xml:"PurposeTypeName"`
	MaterialName                   *MandatoryStringType  `xml:"MaterialName"`
	Mechanism                      *MandatoryStringType  `xml:"Mechanism"`
	CustomersLabSampleRef          *MandatoryStringType  `xml:"CustomersLabSampleRef"`
	CustomersLabSampleRefSecondary []string              `xml:"CustomersLabSampleRefSecondary"`
	Comment                        string                `xml:"Comment"`
	LabName                        *MandatoryStringType  `xml:"LabName"`
	AnalysisCompleteDateTime       time.Time             `xml:"AnalysisCompleteDateTime"`
	DepthValueRecorded             *DepthValueRecorded   `xml:"DepthValueRecorded"`
	PurgedVolumeRecorded           *PurgedVolumeRecorded `xml:"PurgedVolumeRecorded"`
	Measurement                    []*Measurement        `xml:"Measurement"`
}

// FileUpload ...
type FileUpload struct {
	Source                      string               `xml:"Source"`
	Sample                      []*Sample            `xml:"Sample"`
	RegulatedCustomerIdentifier *MandatoryStringType `xml:"RegulatedCustomerIdentifier"`
	CustomerReference           string               `xml:"CustomerReference"`
}

// CustomerReference ...
type CustomerReference string
