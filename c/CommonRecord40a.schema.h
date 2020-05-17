// Copyright 2020 The xgen Authors. All rights reserved.
//
// DO NOT EDIT: generated by xgen XSD generator
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

typedef struct {
	void SoftwareProvider;
	void SoftwareVersion;
} Software;

typedef struct {
	void DocumentID;
	char CreatedDateTime;
	void Software;
	void FullResponseCode;
} TransmissionData;

typedef struct {
	void TransmissionData;
	char Receipt;
} CommonRecordType;
