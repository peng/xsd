// Code generated by xgen. DO NOT EDIT.

// ST_TransitionSideDirectionType ...
typedef char ST_TransitionSideDirectionType;

// ST_TransitionCornerDirectionType ...
typedef char ST_TransitionCornerDirectionType;

// ST_TransitionInOutDirectionType ...
typedef char ST_TransitionInOutDirectionType;

// CT_SideDirectionTransition ...
typedef struct {
	char DirAttr; // attr, optional
} CT_SideDirectionTransition;

// CT_CornerDirectionTransition ...
typedef struct {
	char DirAttr; // attr, optional
} CT_CornerDirectionTransition;

// ST_TransitionEightDirectionType ...
typedef struct {
	char ST_TransitionSideDirectionType;
	char ST_TransitionCornerDirectionType;
} ST_TransitionEightDirectionType;

// CT_EightDirectionTransition ...
typedef struct {
	ST_TransitionEightDirectionType DirAttr; // attr, optional
} CT_EightDirectionTransition;

// CT_OrientationTransition ...
typedef struct {
	char DirAttr; // attr, optional
} CT_OrientationTransition;

// CT_InOutTransition ...
typedef struct {
	char DirAttr; // attr, optional
} CT_InOutTransition;

// CT_OptionalBlackTransition ...
typedef struct {
	bool ThruBlkAttr; // attr, optional
} CT_OptionalBlackTransition;

// CT_SplitTransition ...
typedef struct {
	char OrientAttr; // attr, optional
	char DirAttr; // attr, optional
} CT_SplitTransition;

// CT_WheelTransition ...
typedef struct {
	unsigned int SpokesAttr; // attr, optional
} CT_WheelTransition;

// CT_TransitionStartSoundAction ...
typedef struct {
	bool LoopAttr; // attr, optional
	CT_EmbeddedWAVAudioFile Snd;
} CT_TransitionStartSoundAction;

// CT_TransitionSoundAction ...
typedef struct {
	CT_TransitionStartSoundAction StSnd;
	CT_Empty EndSnd;
} CT_TransitionSoundAction;

// ST_TransitionSpeed ...
typedef char ST_TransitionSpeed;

// CT_SlideTransition ...
typedef struct {
	char SpdAttr; // attr, optional
	bool AdvClickAttr; // attr, optional
	unsigned int AdvTmAttr; // attr, optional
	CT_OrientationTransition Blinds;
	CT_OrientationTransition Checker;
	CT_Empty Circle;
	CT_Empty Dissolve;
	CT_OrientationTransition Comb;
	CT_EightDirectionTransition Cover;
	CT_OptionalBlackTransition Cut;
	CT_Empty Diamond;
	CT_OptionalBlackTransition Fade;
	CT_Empty Newsflash;
	CT_Empty Plus;
	CT_EightDirectionTransition Pull;
	CT_SideDirectionTransition Push;
	CT_Empty Random;
	CT_OrientationTransition RandomBar;
	CT_SplitTransition Split;
	CT_CornerDirectionTransition Strips;
	CT_Empty Wedge;
	CT_WheelTransition Wheel;
	CT_SideDirectionTransition Wipe;
	CT_InOutTransition Zoom;
	CT_TransitionSoundAction SndAc;
	CT_ExtensionListModify ExtLst;
} CT_SlideTransition;

// ST_TLTimeIndefinite ...
typedef char ST_TLTimeIndefinite;

// ST_TLTime ...
typedef struct {
	char ST_TLTimeIndefinite;
	unsigned int UnsignedInt;
} ST_TLTime;

// ST_TLTimeNodeID ...
typedef unsigned int ST_TLTimeNodeID;

// CT_TLIterateIntervalTime ...
typedef struct {
	ST_TLTime ValAttr; // attr
} CT_TLIterateIntervalTime;

// CT_TLIterateIntervalPercentage ...
typedef struct {
	ST_PositivePercentage ValAttr; // attr
} CT_TLIterateIntervalPercentage;

// ST_IterateType ...
typedef char ST_IterateType;

// CT_TLIterateData ...
typedef struct {
	char TypeAttr; // attr, optional
	bool BackwardsAttr; // attr, optional
	CT_TLIterateIntervalTime TmAbs;
	CT_TLIterateIntervalPercentage TmPct;
} CT_TLIterateData;

// CT_TLSubShapeId ...
typedef struct {
	char SpidAttr; // attr
} CT_TLSubShapeId;

// CT_TLTextTargetElement ...
typedef struct {
	CT_IndexRange CharRg;
	CT_IndexRange PRg;
} CT_TLTextTargetElement;

// ST_TLChartSubelementType ...
typedef char ST_TLChartSubelementType;

// CT_TLOleChartTargetElement ...
typedef struct {
	char TypeAttr; // attr
	unsigned int LvlAttr; // attr, optional
} CT_TLOleChartTargetElement;

// CT_TLShapeTargetElement ...
typedef struct {
	unsigned int SpidAttr; // attr
	CT_Empty Bg;
	CT_TLSubShapeId SubSp;
	CT_TLOleChartTargetElement OleChartEl;
	CT_TLTextTargetElement TxEl;
	CT_AnimationElementChoice GraphicEl;
} CT_TLShapeTargetElement;

// CT_TLTimeTargetElement ...
typedef struct {
	CT_Empty SldTgt;
	CT_EmbeddedWAVAudioFile SndTgt;
	CT_TLShapeTargetElement SpTgt;
	CT_TLSubShapeId InkTgt;
} CT_TLTimeTargetElement;

// CT_TLTriggerTimeNodeID ...
typedef struct {
	unsigned int ValAttr; // attr
} CT_TLTriggerTimeNodeID;

// ST_TLTriggerRuntimeNode ...
typedef char ST_TLTriggerRuntimeNode;

// CT_TLTriggerRuntimeNode ...
typedef struct {
	char ValAttr; // attr
} CT_TLTriggerRuntimeNode;

// ST_TLTriggerEvent ...
typedef char ST_TLTriggerEvent;

// CT_TLTimeCondition ...
typedef struct {
	char EvtAttr; // attr, optional
	ST_TLTime DelayAttr; // attr, optional
	CT_TLTimeTargetElement TgtEl;
	CT_TLTriggerTimeNodeID Tn;
	CT_TLTriggerRuntimeNode Rtn;
} CT_TLTimeCondition;

// CT_TLTimeConditionList ...
typedef struct {
	CT_TLTimeCondition Cond[];
} CT_TLTimeConditionList;

// CT_TimeNodeList ...
typedef struct {
	CT_TLTimeNodeParallel Par;
	CT_TLTimeNodeSequence Seq;
	CT_TLTimeNodeExclusive Excl;
	CT_TLAnimateBehavior Anim;
	CT_TLAnimateColorBehavior AnimClr;
	CT_TLAnimateEffectBehavior AnimEffect;
	CT_TLAnimateMotionBehavior AnimMotion;
	CT_TLAnimateRotationBehavior AnimRot;
	CT_TLAnimateScaleBehavior AnimScale;
	CT_TLCommandBehavior Cmd;
	CT_TLSetBehavior Set;
	CT_TLMediaNodeAudio Audio;
	CT_TLMediaNodeVideo Video;
} CT_TimeNodeList;

// ST_TLTimeNodePresetClassType ...
typedef char ST_TLTimeNodePresetClassType;

// ST_TLTimeNodeRestartType ...
typedef char ST_TLTimeNodeRestartType;

// ST_TLTimeNodeFillType ...
typedef char ST_TLTimeNodeFillType;

// ST_TLTimeNodeSyncType ...
typedef char ST_TLTimeNodeSyncType;

// ST_TLTimeNodeMasterRelation ...
typedef char ST_TLTimeNodeMasterRelation;

// ST_TLTimeNodeType ...
typedef char ST_TLTimeNodeType;

// CT_TLCommonTimeNodeData ...
typedef struct {
	unsigned int IdAttr; // attr, optional
	int PresetIDAttr; // attr, optional
	char PresetClassAttr; // attr, optional
	int PresetSubtypeAttr; // attr, optional
	ST_TLTime DurAttr; // attr, optional
	ST_TLTime RepeatCountAttr; // attr, optional
	ST_TLTime RepeatDurAttr; // attr, optional
	ST_Percentage SpdAttr; // attr, optional
	ST_PositiveFixedPercentage AccelAttr; // attr, optional
	ST_PositiveFixedPercentage DecelAttr; // attr, optional
	bool AutoRevAttr; // attr, optional
	char RestartAttr; // attr, optional
	char FillAttr; // attr, optional
	char SyncBehaviorAttr; // attr, optional
	char TmFilterAttr; // attr, optional
	char EvtFilterAttr; // attr, optional
	bool DisplayAttr; // attr, optional
	char MasterRelAttr; // attr, optional
	int BldLvlAttr; // attr, optional
	unsigned int GrpIdAttr; // attr, optional
	bool AfterEffectAttr; // attr, optional
	char NodeTypeAttr; // attr, optional
	bool NodePhAttr; // attr, optional
	CT_TLTimeConditionList StCondLst;
	CT_TLTimeConditionList EndCondLst;
	CT_TLTimeCondition EndSync;
	CT_TLIterateData Iterate;
	CT_TimeNodeList ChildTnLst;
	CT_TimeNodeList SubTnLst;
} CT_TLCommonTimeNodeData;

// CT_TLTimeNodeParallel ...
typedef struct {
	CT_TLCommonTimeNodeData CTn;
} CT_TLTimeNodeParallel;

// ST_TLNextActionType ...
typedef char ST_TLNextActionType;

// ST_TLPreviousActionType ...
typedef char ST_TLPreviousActionType;

// CT_TLTimeNodeSequence ...
typedef struct {
	bool ConcurrentAttr; // attr, optional
	char PrevAcAttr; // attr, optional
	char NextAcAttr; // attr, optional
	CT_TLCommonTimeNodeData CTn;
	CT_TLTimeConditionList PrevCondLst;
	CT_TLTimeConditionList NextCondLst;
} CT_TLTimeNodeSequence;

// CT_TLTimeNodeExclusive ...
typedef struct {
	CT_TLCommonTimeNodeData CTn;
} CT_TLTimeNodeExclusive;

// CT_TLBehaviorAttributeNameList ...
typedef struct {
	char AttrName[];
} CT_TLBehaviorAttributeNameList;

// ST_TLBehaviorAdditiveType ...
typedef char ST_TLBehaviorAdditiveType;

// ST_TLBehaviorAccumulateType ...
typedef char ST_TLBehaviorAccumulateType;

// ST_TLBehaviorTransformType ...
typedef char ST_TLBehaviorTransformType;

// ST_TLBehaviorOverrideType ...
typedef char ST_TLBehaviorOverrideType;

// CT_TLCommonBehaviorData ...
typedef struct {
	char AdditiveAttr; // attr, optional
	char AccumulateAttr; // attr, optional
	char XfrmTypeAttr; // attr, optional
	char FromAttr; // attr, optional
	char ToAttr; // attr, optional
	char ByAttr; // attr, optional
	char RctxAttr; // attr, optional
	char OverrideAttr; // attr, optional
	CT_TLCommonTimeNodeData CTn;
	CT_TLTimeTargetElement TgtEl;
	CT_TLBehaviorAttributeNameList AttrNameLst;
} CT_TLCommonBehaviorData;

// CT_TLAnimVariantBooleanVal ...
typedef struct {
	bool ValAttr; // attr
} CT_TLAnimVariantBooleanVal;

// CT_TLAnimVariantIntegerVal ...
typedef struct {
	int ValAttr; // attr
} CT_TLAnimVariantIntegerVal;

// CT_TLAnimVariantFloatVal ...
typedef struct {
	float ValAttr; // attr
} CT_TLAnimVariantFloatVal;

// CT_TLAnimVariantStringVal ...
typedef struct {
	char ValAttr; // attr
} CT_TLAnimVariantStringVal;

// CT_TLAnimVariant ...
typedef struct {
	CT_TLAnimVariantBooleanVal BoolVal;
	CT_TLAnimVariantIntegerVal IntVal;
	CT_TLAnimVariantFloatVal FltVal;
	CT_TLAnimVariantStringVal StrVal;
	CT_Color ClrVal;
} CT_TLAnimVariant;

// ST_TLTimeAnimateValueTime ...
typedef struct {
	ST_PositiveFixedPercentage ST_PositiveFixedPercentage;
	char ST_TLTimeIndefinite;
} ST_TLTimeAnimateValueTime;

// CT_TLTimeAnimateValue ...
typedef struct {
	ST_TLTimeAnimateValueTime TmAttr; // attr, optional
	char FmlaAttr; // attr, optional
	CT_TLAnimVariant Val;
} CT_TLTimeAnimateValue;

// CT_TLTimeAnimateValueList ...
typedef struct {
	CT_TLTimeAnimateValue Tav[];
} CT_TLTimeAnimateValueList;

// ST_TLAnimateBehaviorCalcMode ...
typedef char ST_TLAnimateBehaviorCalcMode;

// ST_TLAnimateBehaviorValueType ...
typedef char ST_TLAnimateBehaviorValueType;

// CT_TLAnimateBehavior ...
typedef struct {
	char ByAttr; // attr, optional
	char FromAttr; // attr, optional
	char ToAttr; // attr, optional
	char CalcmodeAttr; // attr, optional
	char ValueTypeAttr; // attr, optional
	CT_TLCommonBehaviorData CBhvr;
	CT_TLTimeAnimateValueList TavLst;
} CT_TLAnimateBehavior;

// CT_TLByRgbColorTransform ...
typedef struct {
	ST_FixedPercentage RAttr; // attr
	ST_FixedPercentage GAttr; // attr
	ST_FixedPercentage BAttr; // attr
} CT_TLByRgbColorTransform;

// CT_TLByHslColorTransform ...
typedef struct {
	int HAttr; // attr
	ST_FixedPercentage SAttr; // attr
	ST_FixedPercentage LAttr; // attr
} CT_TLByHslColorTransform;

// CT_TLByAnimateColorTransform ...
typedef struct {
	CT_TLByRgbColorTransform Rgb;
	CT_TLByHslColorTransform Hsl;
} CT_TLByAnimateColorTransform;

// ST_TLAnimateColorSpace ...
typedef char ST_TLAnimateColorSpace;

// ST_TLAnimateColorDirection ...
typedef char ST_TLAnimateColorDirection;

// CT_TLAnimateColorBehavior ...
typedef struct {
	char ClrSpcAttr; // attr, optional
	char DirAttr; // attr, optional
	CT_TLCommonBehaviorData CBhvr;
	CT_TLByAnimateColorTransform By;
	CT_Color From;
	CT_Color To;
} CT_TLAnimateColorBehavior;

// ST_TLAnimateEffectTransition ...
typedef char ST_TLAnimateEffectTransition;

// CT_TLAnimateEffectBehavior ...
typedef struct {
	char TransitionAttr; // attr, optional
	char FilterAttr; // attr, optional
	char PrLstAttr; // attr, optional
	CT_TLCommonBehaviorData CBhvr;
	CT_TLAnimVariant Progress;
} CT_TLAnimateEffectBehavior;

// ST_TLAnimateMotionBehaviorOrigin ...
typedef char ST_TLAnimateMotionBehaviorOrigin;

// ST_TLAnimateMotionPathEditMode ...
typedef char ST_TLAnimateMotionPathEditMode;

// CT_TLPoint ...
typedef struct {
	ST_Percentage XAttr; // attr
	ST_Percentage YAttr; // attr
} CT_TLPoint;

// CT_TLAnimateMotionBehavior ...
typedef struct {
	char OriginAttr; // attr, optional
	char PathAttr; // attr, optional
	char PathEditModeAttr; // attr, optional
	int RAngAttr; // attr, optional
	char PtsTypesAttr; // attr, optional
	CT_TLCommonBehaviorData CBhvr;
	CT_TLPoint By;
	CT_TLPoint From;
	CT_TLPoint To;
	CT_TLPoint RCtr;
} CT_TLAnimateMotionBehavior;

// CT_TLAnimateRotationBehavior ...
typedef struct {
	int ByAttr; // attr, optional
	int FromAttr; // attr, optional
	int ToAttr; // attr, optional
	CT_TLCommonBehaviorData CBhvr;
} CT_TLAnimateRotationBehavior;

// CT_TLAnimateScaleBehavior ...
typedef struct {
	bool ZoomContentsAttr; // attr, optional
	CT_TLCommonBehaviorData CBhvr;
	CT_TLPoint By;
	CT_TLPoint From;
	CT_TLPoint To;
} CT_TLAnimateScaleBehavior;

// ST_TLCommandType ...
typedef char ST_TLCommandType;

// CT_TLCommandBehavior ...
typedef struct {
	char TypeAttr; // attr, optional
	char CmdAttr; // attr, optional
	CT_TLCommonBehaviorData CBhvr;
} CT_TLCommandBehavior;

// CT_TLSetBehavior ...
typedef struct {
	CT_TLCommonBehaviorData CBhvr;
	CT_TLAnimVariant To;
} CT_TLSetBehavior;

// CT_TLCommonMediaNodeData ...
typedef struct {
	ST_PositiveFixedPercentage VolAttr; // attr, optional
	bool MuteAttr; // attr, optional
	unsigned int NumSldAttr; // attr, optional
	bool ShowWhenStoppedAttr; // attr, optional
	CT_TLCommonTimeNodeData CTn;
	CT_TLTimeTargetElement TgtEl;
} CT_TLCommonMediaNodeData;

// CT_TLMediaNodeAudio ...
typedef struct {
	bool IsNarrationAttr; // attr, optional
	CT_TLCommonMediaNodeData CMediaNode;
} CT_TLMediaNodeAudio;

// CT_TLMediaNodeVideo ...
typedef struct {
	bool FullScrnAttr; // attr, optional
	CT_TLCommonMediaNodeData CMediaNode;
} CT_TLMediaNodeVideo;

// AG_TLBuild ...
typedef struct {
	unsigned int SpidAttr; // attr
	unsigned int GrpIdAttr; // attr
	bool UiExpandAttr; // attr, optional
} AG_TLBuild;

// CT_TLTemplate ...
typedef struct {
	unsigned int LvlAttr; // attr, optional
	CT_TimeNodeList TnLst;
} CT_TLTemplate;

// CT_TLTemplateList ...
typedef struct {
	CT_TLTemplate Tmpl[];
} CT_TLTemplateList;

// ST_TLParaBuildType ...
typedef char ST_TLParaBuildType;

// CT_TLBuildParagraph ...
typedef struct {
	AG_TLBuild AG_TLBuild;
	char BuildAttr; // attr, optional
	unsigned int BldLvlAttr; // attr, optional
	bool AnimBgAttr; // attr, optional
	bool AutoUpdateAnimBgAttr; // attr, optional
	bool RevAttr; // attr, optional
	ST_TLTime AdvAutoAttr; // attr, optional
	CT_TLTemplateList TmplLst;
} CT_TLBuildParagraph;

// ST_TLDiagramBuildType ...
typedef char ST_TLDiagramBuildType;

// CT_TLBuildDiagram ...
typedef struct {
	AG_TLBuild AG_TLBuild;
	char BldAttr; // attr, optional
} CT_TLBuildDiagram;

// ST_TLOleChartBuildType ...
typedef char ST_TLOleChartBuildType;

// CT_TLOleBuildChart ...
typedef struct {
	AG_TLBuild AG_TLBuild;
	char BldAttr; // attr, optional
	bool AnimBgAttr; // attr, optional
} CT_TLOleBuildChart;

// CT_TLGraphicalObjectBuild ...
typedef struct {
	AG_TLBuild AG_TLBuild;
	CT_Empty BldAsOne;
	CT_AnimationGraphicalObjectBuildProperties BldSub;
} CT_TLGraphicalObjectBuild;

// CT_BuildList ...
typedef struct {
	CT_TLBuildParagraph BldP;
	CT_TLBuildDiagram BldDgm;
	CT_TLOleBuildChart BldOleChart;
	CT_TLGraphicalObjectBuild BldGraphic;
} CT_BuildList;

// CT_SlideTiming ...
typedef struct {
	CT_TimeNodeList TnLst;
	CT_BuildList BldLst;
	CT_ExtensionListModify ExtLst;
} CT_SlideTiming;

// CT_Empty ...
typedef struct {
} CT_Empty;

// ST_Name ...
typedef char ST_Name;

// ST_Direction ...
typedef char ST_Direction;

// ST_Index ...
typedef unsigned int ST_Index;

// CT_IndexRange ...
typedef struct {
	unsigned int StAttr; // attr
	unsigned int EndAttr; // attr
} CT_IndexRange;

// CT_SlideRelationshipListEntry ...
typedef struct {
	char RIdAttr; // attr
} CT_SlideRelationshipListEntry;

// CT_SlideRelationshipList ...
typedef struct {
	CT_SlideRelationshipListEntry Sld[];
} CT_SlideRelationshipList;

// CT_CustomShowId ...
typedef struct {
	unsigned int IdAttr; // attr
} CT_CustomShowId;

// EG_SlideListChoice ...
typedef struct {
	CT_Empty SldAll;
	CT_IndexRange SldRg;
	CT_CustomShowId CustShow;
} EG_SlideListChoice;

// CT_CustomerData ...
typedef struct {
	char RIdAttr; // attr
} CT_CustomerData;

// CT_TagsData ...
typedef struct {
	char RIdAttr; // attr
} CT_TagsData;

// CT_CustomerDataList ...
typedef struct {
	CT_CustomerData CustData[];
	CT_TagsData Tags;
} CT_CustomerDataList;

// CT_Extension ...
typedef struct {
	char UriAttr; // attr
} CT_Extension;

// EG_ExtensionList ...
typedef struct {
	CT_Extension Ext[];
} EG_ExtensionList;

// CT_ExtensionList ...
typedef struct {
	EG_ExtensionList EG_ExtensionList[];
} CT_ExtensionList;

// CT_ExtensionListModify ...
typedef struct {
	bool ModAttr; // attr, optional
	EG_ExtensionList EG_ExtensionList[];
} CT_ExtensionListModify;

// CT_CommentAuthor ...
typedef struct {
	unsigned int IdAttr; // attr
	char NameAttr; // attr
	char InitialsAttr; // attr
	unsigned int LastIdxAttr; // attr
	unsigned int ClrIdxAttr; // attr
	CT_ExtensionList ExtLst;
} CT_CommentAuthor;

// CT_CommentAuthorList ...
typedef struct {
	CT_CommentAuthor CmAuthor[];
} CT_CommentAuthorList;

typedef CT_CommentAuthorList CmAuthorLst;

// CT_Comment ...
typedef struct {
	unsigned int AuthorIdAttr; // attr
	char DtAttr; // attr, optional
	unsigned int IdxAttr; // attr
	CT_Point2D Pos;
	char Text;
	CT_ExtensionListModify ExtLst;
} CT_Comment;

// CT_CommentList ...
typedef struct {
	CT_Comment Cm[];
} CT_CommentList;

typedef CT_CommentList CmLst;

// AG_Ole ...
typedef struct {
	char NameAttr; // attr, optional
	bool ShowAsIconAttr; // attr, optional
	char RIdAttr; // attr, optional
	int ImgWAttr; // attr, optional
	int ImgHAttr; // attr, optional
} AG_Ole;

// ST_OleObjectFollowColorScheme ...
typedef char ST_OleObjectFollowColorScheme;

// CT_OleObjectEmbed ...
typedef struct {
	char FollowColorSchemeAttr; // attr, optional
	CT_ExtensionList ExtLst;
} CT_OleObjectEmbed;

// CT_OleObjectLink ...
typedef struct {
	bool UpdateAutomaticAttr; // attr, optional
	CT_ExtensionList ExtLst;
} CT_OleObjectLink;

// CT_OleObject ...
typedef struct {
	AG_Ole AG_Ole;
	char ProgIdAttr; // attr, optional
	CT_OleObjectEmbed Embed;
	CT_OleObjectLink Link;
	CT_Picture Pic;
} CT_OleObject;

typedef CT_OleObject OleObj;

// CT_Control ...
typedef struct {
	AG_Ole AG_Ole;
	CT_ExtensionList ExtLst;
	CT_Picture Pic;
} CT_Control;

// CT_ControlList ...
typedef struct {
	CT_Control Control[];
} CT_ControlList;

// ST_SlideId ...
typedef unsigned int ST_SlideId;

// CT_SlideIdListEntry ...
typedef struct {
	unsigned int IdAttr; // attr
	char RIdAttr; // attr
	CT_ExtensionList ExtLst;
} CT_SlideIdListEntry;

// CT_SlideIdList ...
typedef struct {
	CT_SlideIdListEntry SldId[];
} CT_SlideIdList;

// ST_SlideMasterId ...
typedef unsigned int ST_SlideMasterId;

// CT_SlideMasterIdListEntry ...
typedef struct {
	unsigned int IdAttr; // attr, optional
	char RIdAttr; // attr
	CT_ExtensionList ExtLst;
} CT_SlideMasterIdListEntry;

// CT_SlideMasterIdList ...
typedef struct {
	CT_SlideMasterIdListEntry SldMasterId[];
} CT_SlideMasterIdList;

// CT_NotesMasterIdListEntry ...
typedef struct {
	char RIdAttr; // attr
	CT_ExtensionList ExtLst;
} CT_NotesMasterIdListEntry;

// CT_NotesMasterIdList ...
typedef struct {
	CT_NotesMasterIdListEntry NotesMasterId;
} CT_NotesMasterIdList;

// CT_HandoutMasterIdListEntry ...
typedef struct {
	char RIdAttr; // attr
	CT_ExtensionList ExtLst;
} CT_HandoutMasterIdListEntry;

// CT_HandoutMasterIdList ...
typedef struct {
	CT_HandoutMasterIdListEntry HandoutMasterId;
} CT_HandoutMasterIdList;

// CT_EmbeddedFontDataId ...
typedef struct {
	char RIdAttr; // attr
} CT_EmbeddedFontDataId;

// CT_EmbeddedFontListEntry ...
typedef struct {
	CT_TextFont Font;
	CT_EmbeddedFontDataId Regular;
	CT_EmbeddedFontDataId Bold;
	CT_EmbeddedFontDataId Italic;
	CT_EmbeddedFontDataId BoldItalic;
} CT_EmbeddedFontListEntry;

// CT_EmbeddedFontList ...
typedef struct {
	CT_EmbeddedFontListEntry EmbeddedFont[];
} CT_EmbeddedFontList;

// CT_SmartTags ...
typedef struct {
	char RIdAttr; // attr
} CT_SmartTags;

// CT_CustomShow ...
typedef struct {
	char NameAttr; // attr
	unsigned int IdAttr; // attr
	CT_SlideRelationshipList SldLst;
	CT_ExtensionList ExtLst;
} CT_CustomShow;

// CT_CustomShowList ...
typedef struct {
	CT_CustomShow CustShow[];
} CT_CustomShowList;

// ST_PhotoAlbumLayout ...
typedef char ST_PhotoAlbumLayout;

// ST_PhotoAlbumFrameShape ...
typedef char ST_PhotoAlbumFrameShape;

// CT_PhotoAlbum ...
typedef struct {
	bool BwAttr; // attr, optional
	bool ShowCaptionsAttr; // attr, optional
	char LayoutAttr; // attr, optional
	char FrameAttr; // attr, optional
	CT_ExtensionList ExtLst;
} CT_PhotoAlbum;

// ST_SlideSizeCoordinate ...
typedef int ST_SlideSizeCoordinate;

// ST_SlideSizeType ...
typedef char ST_SlideSizeType;

// CT_SlideSize ...
typedef struct {
	int CxAttr; // attr
	int CyAttr; // attr
	char TypeAttr; // attr, optional
} CT_SlideSize;

// CT_Kinsoku ...
typedef struct {
	char LangAttr; // attr, optional
	char InvalStCharsAttr; // attr
	char InvalEndCharsAttr; // attr
} CT_Kinsoku;

// ST_BookmarkIdSeed ...
typedef unsigned int ST_BookmarkIdSeed;

// CT_ModifyVerifier ...
typedef struct {
	char AlgorithmNameAttr; // attr, optional
	char HashValueAttr[]; // attr, optional
	char SaltValueAttr[]; // attr, optional
	unsigned int SpinValueAttr; // attr, optional
} CT_ModifyVerifier;

// CT_Presentation ...
typedef struct {
	ST_Percentage ServerZoomAttr; // attr, optional
	int FirstSlideNumAttr; // attr, optional
	bool ShowSpecialPlsOnTitleSldAttr; // attr, optional
	bool RtlAttr; // attr, optional
	bool RemovePersonalInfoOnSaveAttr; // attr, optional
	bool CompatModeAttr; // attr, optional
	bool StrictFirstAndLastCharsAttr; // attr, optional
	bool EmbedTrueTypeFontsAttr; // attr, optional
	bool SaveSubsetFontsAttr; // attr, optional
	bool AutoCompressPicturesAttr; // attr, optional
	unsigned int BookmarkIdSeedAttr; // attr, optional
	char ConformanceAttr; // attr, optional
	CT_SlideMasterIdList SldMasterIdLst;
	CT_NotesMasterIdList NotesMasterIdLst;
	CT_HandoutMasterIdList HandoutMasterIdLst;
	CT_SlideIdList SldIdLst;
	CT_SlideSize SldSz;
	CT_PositiveSize2D NotesSz;
	CT_SmartTags SmartTags;
	CT_EmbeddedFontList EmbeddedFontLst;
	CT_CustomShowList CustShowLst;
	CT_PhotoAlbum PhotoAlbum;
	CT_CustomerDataList CustDataLst;
	CT_Kinsoku Kinsoku;
	CT_TextListStyle DefaultTextStyle;
	CT_ModifyVerifier ModifyVerifier;
	CT_ExtensionList ExtLst;
} CT_Presentation;

typedef CT_Presentation Presentation;

// CT_HtmlPublishProperties ...
typedef struct {
	bool ShowSpeakerNotesAttr; // attr, optional
	char TargetAttr; // attr, optional
	char TitleAttr; // attr, optional
	char RIdAttr; // attr
	EG_SlideListChoice EG_SlideListChoice[];
	CT_ExtensionList ExtLst;
} CT_HtmlPublishProperties;

// ST_PrintWhat ...
typedef char ST_PrintWhat;

// ST_PrintColorMode ...
typedef char ST_PrintColorMode;

// CT_PrintProperties ...
typedef struct {
	char PrnWhatAttr; // attr, optional
	char ClrModeAttr; // attr, optional
	bool HiddenSlidesAttr; // attr, optional
	bool ScaleToFitPaperAttr; // attr, optional
	bool FrameSlidesAttr; // attr, optional
	CT_ExtensionList ExtLst;
} CT_PrintProperties;

// CT_ShowInfoBrowse ...
typedef struct {
	bool ShowScrollbarAttr; // attr, optional
} CT_ShowInfoBrowse;

// CT_ShowInfoKiosk ...
typedef struct {
	unsigned int RestartAttr; // attr, optional
} CT_ShowInfoKiosk;

// EG_ShowType ...
typedef struct {
	CT_Empty Present;
	CT_ShowInfoBrowse Browse;
	CT_ShowInfoKiosk Kiosk;
} EG_ShowType;

// CT_ShowProperties ...
typedef struct {
	bool LoopAttr; // attr, optional
	bool ShowNarrationAttr; // attr, optional
	bool ShowAnimationAttr; // attr, optional
	bool UseTimingsAttr; // attr, optional
	EG_ShowType EG_ShowType[];
	EG_SlideListChoice EG_SlideListChoice[];
	CT_Color PenClr;
	CT_ExtensionList ExtLst;
} CT_ShowProperties;

// CT_PresentationProperties ...
typedef struct {
	CT_PrintProperties PrnPr;
	CT_ShowProperties ShowPr;
	CT_ColorMRU ClrMru;
	CT_ExtensionList ExtLst;
} CT_PresentationProperties;

typedef CT_PresentationProperties PresentationPr;

// CT_HeaderFooter ...
typedef struct {
	bool SldNumAttr; // attr, optional
	bool HdrAttr; // attr, optional
	bool FtrAttr; // attr, optional
	bool DtAttr; // attr, optional
	CT_ExtensionListModify ExtLst;
} CT_HeaderFooter;

// ST_PlaceholderType ...
typedef char ST_PlaceholderType;

// ST_PlaceholderSize ...
typedef char ST_PlaceholderSize;

// CT_Placeholder ...
typedef struct {
	char TypeAttr; // attr, optional
	char OrientAttr; // attr, optional
	char SzAttr; // attr, optional
	unsigned int IdxAttr; // attr, optional
	bool HasCustomPromptAttr; // attr, optional
	CT_ExtensionListModify ExtLst;
} CT_Placeholder;

// CT_ApplicationNonVisualDrawingProps ...
typedef struct {
	bool IsPhotoAttr; // attr, optional
	bool UserDrawnAttr; // attr, optional
	EG_Media AEG_Media[];
	CT_Placeholder Ph;
	CT_CustomerDataList CustDataLst;
	CT_ExtensionList ExtLst;
} CT_ApplicationNonVisualDrawingProps;

// CT_ShapeNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualDrawingShapeProps CNvSpPr;
	CT_ApplicationNonVisualDrawingProps NvPr;
} CT_ShapeNonVisual;

// CT_Shape ...
typedef struct {
	bool UseBgFillAttr; // attr, optional
	CT_ShapeNonVisual NvSpPr;
	CT_ShapeProperties SpPr;
	CT_ShapeStyle Style;
	CT_TextBody TxBody;
	CT_ExtensionListModify ExtLst;
} CT_Shape;

// CT_ConnectorNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualConnectorProperties CNvCxnSpPr;
	CT_ApplicationNonVisualDrawingProps NvPr;
} CT_ConnectorNonVisual;

// CT_Connector ...
typedef struct {
	CT_ConnectorNonVisual NvCxnSpPr;
	CT_ShapeProperties SpPr;
	CT_ShapeStyle Style;
	CT_ExtensionListModify ExtLst;
} CT_Connector;

// CT_PictureNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualPictureProperties CNvPicPr;
	CT_ApplicationNonVisualDrawingProps NvPr;
} CT_PictureNonVisual;

// CT_Picture ...
typedef struct {
	CT_PictureNonVisual NvPicPr;
	CT_BlipFillProperties BlipFill;
	CT_ShapeProperties SpPr;
	CT_ShapeStyle Style;
	CT_ExtensionListModify ExtLst;
} CT_Picture;

// CT_GraphicalObjectFrameNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualGraphicFrameProperties CNvGraphicFramePr;
	CT_ApplicationNonVisualDrawingProps NvPr;
} CT_GraphicalObjectFrameNonVisual;

// CT_GraphicalObjectFrame ...
typedef struct {
	char BwModeAttr; // attr, optional
	CT_GraphicalObjectFrameNonVisual NvGraphicFramePr;
	CT_Transform2D Xfrm;
	CT_GraphicalObject AGraphic;
	CT_ExtensionListModify ExtLst;
} CT_GraphicalObjectFrame;

// CT_GroupShapeNonVisual ...
typedef struct {
	CT_NonVisualDrawingProps CNvPr;
	CT_NonVisualGroupDrawingShapeProps CNvGrpSpPr;
	CT_ApplicationNonVisualDrawingProps NvPr;
} CT_GroupShapeNonVisual;

// CT_GroupShape ...
typedef struct {
	CT_GroupShapeNonVisual NvGrpSpPr;
	CT_GroupShapeProperties GrpSpPr;
	CT_Shape Sp;
	CT_GroupShape GrpSp;
	CT_GraphicalObjectFrame GraphicFrame;
	CT_Connector CxnSp;
	CT_Picture Pic;
	CT_Rel ContentPart;
	CT_ExtensionListModify ExtLst;
} CT_GroupShape;

// CT_Rel ...
typedef struct {
	char RIdAttr; // attr
} CT_Rel;

// EG_TopLevelSlide ...
typedef struct {
	CT_ColorMapping ClrMap;
} EG_TopLevelSlide;

// EG_ChildSlide ...
typedef struct {
	CT_ColorMappingOverride ClrMapOvr;
} EG_ChildSlide;

// AG_ChildSlide ...
typedef struct {
	bool ShowMasterSpAttr; // attr, optional
	bool ShowMasterPhAnimAttr; // attr, optional
} AG_ChildSlide;

// CT_BackgroundProperties ...
typedef struct {
	bool ShadeToTitleAttr; // attr, optional
	EG_FillProperties AEG_FillProperties[];
	EG_EffectProperties AEG_EffectProperties[];
	CT_ExtensionList ExtLst;
} CT_BackgroundProperties;

// EG_Background ...
typedef struct {
	CT_BackgroundProperties BgPr;
	CT_StyleMatrixReference BgRef;
} EG_Background;

// CT_Background ...
typedef struct {
	char BwModeAttr; // attr, optional
	EG_Background EG_Background;
} CT_Background;

// CT_CommonSlideData ...
typedef struct {
	char NameAttr; // attr, optional
	CT_Background Bg;
	CT_GroupShape SpTree;
	CT_CustomerDataList CustDataLst;
	CT_ControlList Controls;
	CT_ExtensionList ExtLst;
} CT_CommonSlideData;

// CT_Slide ...
typedef struct {
	AG_ChildSlide AG_ChildSlide;
	bool ShowAttr; // attr, optional
	EG_ChildSlide EG_ChildSlide[];
	CT_CommonSlideData CSld;
	CT_SlideTransition Transition;
	CT_SlideTiming Timing;
	CT_ExtensionListModify ExtLst;
} CT_Slide;

typedef CT_Slide Sld;

// ST_SlideLayoutType ...
typedef char ST_SlideLayoutType;

// CT_SlideLayout ...
typedef struct {
	AG_ChildSlide AG_ChildSlide;
	char MatchingNameAttr; // attr, optional
	char TypeAttr; // attr, optional
	bool PreserveAttr; // attr, optional
	bool UserDrawnAttr; // attr, optional
	EG_ChildSlide EG_ChildSlide[];
	CT_CommonSlideData CSld;
	CT_SlideTransition Transition;
	CT_SlideTiming Timing;
	CT_HeaderFooter Hf;
	CT_ExtensionListModify ExtLst;
} CT_SlideLayout;

typedef CT_SlideLayout SldLayout;

// CT_SlideMasterTextStyles ...
typedef struct {
	CT_TextListStyle TitleStyle;
	CT_TextListStyle BodyStyle;
	CT_TextListStyle OtherStyle;
	CT_ExtensionList ExtLst;
} CT_SlideMasterTextStyles;

// ST_SlideLayoutId ...
typedef unsigned int ST_SlideLayoutId;

// CT_SlideLayoutIdListEntry ...
typedef struct {
	unsigned int IdAttr; // attr, optional
	char RIdAttr; // attr
	CT_ExtensionList ExtLst;
} CT_SlideLayoutIdListEntry;

// CT_SlideLayoutIdList ...
typedef struct {
	CT_SlideLayoutIdListEntry SldLayoutId[];
} CT_SlideLayoutIdList;

// CT_SlideMaster ...
typedef struct {
	bool PreserveAttr; // attr, optional
	EG_TopLevelSlide EG_TopLevelSlide[];
	CT_CommonSlideData CSld;
	CT_SlideLayoutIdList SldLayoutIdLst;
	CT_SlideTransition Transition;
	CT_SlideTiming Timing;
	CT_HeaderFooter Hf;
	CT_SlideMasterTextStyles TxStyles;
	CT_ExtensionListModify ExtLst;
} CT_SlideMaster;

typedef CT_SlideMaster SldMaster;

// CT_HandoutMaster ...
typedef struct {
	EG_TopLevelSlide EG_TopLevelSlide[];
	CT_CommonSlideData CSld;
	CT_HeaderFooter Hf;
	CT_ExtensionListModify ExtLst;
} CT_HandoutMaster;

typedef CT_HandoutMaster HandoutMaster;

// CT_NotesMaster ...
typedef struct {
	EG_TopLevelSlide EG_TopLevelSlide[];
	CT_CommonSlideData CSld;
	CT_HeaderFooter Hf;
	CT_TextListStyle NotesStyle;
	CT_ExtensionListModify ExtLst;
} CT_NotesMaster;

typedef CT_NotesMaster NotesMaster;

// CT_NotesSlide ...
typedef struct {
	AG_ChildSlide AG_ChildSlide;
	EG_ChildSlide EG_ChildSlide[];
	CT_CommonSlideData CSld;
	CT_ExtensionListModify ExtLst;
} CT_NotesSlide;

typedef CT_NotesSlide Notes;

// CT_SlideSyncProperties ...
typedef struct {
	char ServerSldIdAttr; // attr
	char ServerSldModifiedTimeAttr; // attr
	char ClientInsertedTimeAttr; // attr
	CT_ExtensionList ExtLst;
} CT_SlideSyncProperties;

typedef CT_SlideSyncProperties SldSyncPr;

// CT_StringTag ...
typedef struct {
	char NameAttr; // attr
	char ValAttr; // attr
} CT_StringTag;

// CT_TagList ...
typedef struct {
	CT_StringTag Tag[];
} CT_TagList;

typedef CT_TagList TagLst;

// ST_SplitterBarState ...
typedef char ST_SplitterBarState;

// ST_ViewType ...
typedef char ST_ViewType;

// CT_NormalViewPortion ...
typedef struct {
	ST_PositiveFixedPercentage SzAttr; // attr
	bool AutoAdjustAttr; // attr, optional
} CT_NormalViewPortion;

// CT_NormalViewProperties ...
typedef struct {
	bool ShowOutlineIconsAttr; // attr, optional
	bool SnapVertSplitterAttr; // attr, optional
	char VertBarStateAttr; // attr, optional
	char HorzBarStateAttr; // attr, optional
	bool PreferSingleViewAttr; // attr, optional
	CT_NormalViewPortion RestoredLeft;
	CT_NormalViewPortion RestoredTop;
	CT_ExtensionList ExtLst;
} CT_NormalViewProperties;

// CT_CommonViewProperties ...
typedef struct {
	bool VarScaleAttr; // attr, optional
	CT_Scale2D Scale;
	CT_Point2D Origin;
} CT_CommonViewProperties;

// CT_NotesTextViewProperties ...
typedef struct {
	CT_CommonViewProperties CViewPr;
	CT_ExtensionList ExtLst;
} CT_NotesTextViewProperties;

// CT_OutlineViewSlideEntry ...
typedef struct {
	char RIdAttr; // attr
	bool CollapseAttr; // attr, optional
} CT_OutlineViewSlideEntry;

// CT_OutlineViewSlideList ...
typedef struct {
	CT_OutlineViewSlideEntry Sld[];
} CT_OutlineViewSlideList;

// CT_OutlineViewProperties ...
typedef struct {
	CT_CommonViewProperties CViewPr;
	CT_OutlineViewSlideList SldLst;
	CT_ExtensionList ExtLst;
} CT_OutlineViewProperties;

// CT_SlideSorterViewProperties ...
typedef struct {
	bool ShowFormattingAttr; // attr, optional
	CT_CommonViewProperties CViewPr;
	CT_ExtensionList ExtLst;
} CT_SlideSorterViewProperties;

// CT_Guide ...
typedef struct {
	char OrientAttr; // attr, optional
	ST_Coordinate32 PosAttr; // attr, optional
} CT_Guide;

// CT_GuideList ...
typedef struct {
	CT_Guide Guide[];
} CT_GuideList;

// CT_CommonSlideViewProperties ...
typedef struct {
	bool SnapToGridAttr; // attr, optional
	bool SnapToObjectsAttr; // attr, optional
	bool ShowGuidesAttr; // attr, optional
	CT_CommonViewProperties CViewPr;
	CT_GuideList GuideLst;
} CT_CommonSlideViewProperties;

// CT_SlideViewProperties ...
typedef struct {
	CT_CommonSlideViewProperties CSldViewPr;
	CT_ExtensionList ExtLst;
} CT_SlideViewProperties;

// CT_NotesViewProperties ...
typedef struct {
	CT_CommonSlideViewProperties CSldViewPr;
	CT_ExtensionList ExtLst;
} CT_NotesViewProperties;

// CT_ViewProperties ...
typedef struct {
	char LastViewAttr; // attr, optional
	bool ShowCommentsAttr; // attr, optional
	CT_NormalViewProperties NormalViewPr;
	CT_SlideViewProperties SlideViewPr;
	CT_OutlineViewProperties OutlineViewPr;
	CT_NotesTextViewProperties NotesTextViewPr;
	CT_SlideSorterViewProperties SorterViewPr;
	CT_NotesViewProperties NotesViewPr;
	CT_PositiveSize2D GridSpacing;
	CT_ExtensionList ExtLst;
} CT_ViewProperties;

typedef CT_ViewProperties ViewPr;
