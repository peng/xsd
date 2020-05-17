// Copyright 2020 The xgen Authors. All rights reserved.
//
// DO NOT EDIT: generated by xgen XSD generator
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

typedef struct {
	float DepthValue;
	MandatoryStringType DepthValueUnits;
	MandatoryStringType DepthRelativeTo;
} DepthValueRecorded;

typedef struct {
	float PurgedVolume;
	MandatoryStringType PurgedVolumeUnits;
} PurgedVolumeRecorded;

typedef struct {
	MandatoryStringType DeterminandName;
	MandatoryStringType ResultType;
	float ResultValue;
	MandatoryStringType ResultUnits;
	MandatoryStringType Qualifier;
	char Comment;
} Measurement;

typedef struct {
	char Sampler;
	MandatoryStringType SampleType;
	MandatoryStringType CustomerSamplePointName;
	char SampleDateTime;
	MandatoryStringType PurposeTypeName;
	MandatoryStringType MaterialName;
	MandatoryStringType Mechanism;
	MandatoryStringType CustomersLabSampleRef;
	char CustomersLabSampleRefSecondary[];
	char Comment;
	MandatoryStringType LabName;
	char AnalysisCompleteDateTime;
	DepthValueRecorded DepthValueRecorded;
	PurgedVolumeRecorded PurgedVolumeRecorded;
	Measurement Measurement[];
} Sample;

typedef struct {
	char Source;
	Sample Sample[];
	MandatoryStringType RegulatedCustomerIdentifier;
	char CustomerReference;
} FileUpload;

typedef char CustomerReference;
