// Code generated by xgen. DO NOT EDIT.

package schema;

import java.util.ArrayList;
import java.util.List;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlSchemaType;
import javax.xml.bind.annotation.XmlType;

public class CT_ShapeNonVisual {
	@XmlElement(required = true, name = "cNvPr")
	protected List<CT_NonVisualDrawingProps> CNvPr;
	@XmlElement(required = true, name = "cNvSpPr")
	protected List<CT_NonVisualDrawingShapeProps> CNvSpPr;
}

public class CT_Shape {
	@XmlAttribute(name = "macro")
	protected StringAttr Macro;
	@XmlAttribute(name = "textlink")
	protected StringAttr Textlink;
	@XmlAttribute(name = "fLocksText")
	protected BooleanAttr FLocksText;
	@XmlAttribute(name = "fPublished")
	protected BooleanAttr FPublished;
	@XmlElement(required = true, name = "nvSpPr")
	protected List<CT_ShapeNonVisual> NvSpPr;
	@XmlElement(required = true, name = "spPr")
	protected List<CT_ShapeProperties> SpPr;
	@XmlElement(required = true, name = "style")
	protected List<CT_ShapeStyle> Style;
	@XmlElement(required = true, name = "txBody")
	protected List<CT_TextBody> TxBody;
}

public class CT_ConnectorNonVisual {
	@XmlElement(required = true, name = "cNvPr")
	protected List<CT_NonVisualDrawingProps> CNvPr;
	@XmlElement(required = true, name = "cNvCxnSpPr")
	protected List<CT_NonVisualConnectorProperties> CNvCxnSpPr;
}

public class CT_Connector {
	@XmlAttribute(name = "macro")
	protected StringAttr Macro;
	@XmlAttribute(name = "fPublished")
	protected BooleanAttr FPublished;
	@XmlElement(required = true, name = "nvCxnSpPr")
	protected List<CT_ConnectorNonVisual> NvCxnSpPr;
	@XmlElement(required = true, name = "spPr")
	protected List<CT_ShapeProperties> SpPr;
	@XmlElement(required = true, name = "style")
	protected List<CT_ShapeStyle> Style;
}

public class CT_PictureNonVisual {
	@XmlElement(required = true, name = "cNvPr")
	protected List<CT_NonVisualDrawingProps> CNvPr;
	@XmlElement(required = true, name = "cNvPicPr")
	protected List<CT_NonVisualPictureProperties> CNvPicPr;
}

public class CT_Picture {
	@XmlAttribute(name = "macro")
	protected StringAttr Macro;
	@XmlAttribute(name = "fPublished")
	protected BooleanAttr FPublished;
	@XmlElement(required = true, name = "nvPicPr")
	protected List<CT_PictureNonVisual> NvPicPr;
	@XmlElement(required = true, name = "blipFill")
	protected List<CT_BlipFillProperties> BlipFill;
	@XmlElement(required = true, name = "spPr")
	protected List<CT_ShapeProperties> SpPr;
	@XmlElement(required = true, name = "style")
	protected List<CT_ShapeStyle> Style;
}

public class CT_GraphicFrameNonVisual {
	@XmlElement(required = true, name = "cNvPr")
	protected List<CT_NonVisualDrawingProps> CNvPr;
	@XmlElement(required = true, name = "cNvGraphicFramePr")
	protected List<CT_NonVisualGraphicFrameProperties> CNvGraphicFramePr;
}

public class CT_GraphicFrame {
	@XmlAttribute(name = "macro")
	protected StringAttr Macro;
	@XmlAttribute(name = "fPublished")
	protected BooleanAttr FPublished;
	@XmlElement(required = true, name = "nvGraphicFramePr")
	protected List<CT_GraphicFrameNonVisual> NvGraphicFramePr;
	@XmlElement(required = true, name = "xfrm")
	protected List<CT_Transform2D> Xfrm;
	@XmlElement(required = true, name = "a:graphic")
	protected List<CT_GraphicalObject> AGraphic;
}

public class CT_GroupShapeNonVisual {
	@XmlElement(required = true, name = "cNvPr")
	protected List<CT_NonVisualDrawingProps> CNvPr;
	@XmlElement(required = true, name = "cNvGrpSpPr")
	protected List<CT_NonVisualGroupDrawingShapeProps> CNvGrpSpPr;
}

public class CT_GroupShape {
	@XmlElement(required = true, name = "nvGrpSpPr")
	protected List<CT_GroupShapeNonVisual> NvGrpSpPr;
	@XmlElement(required = true, name = "grpSpPr")
	protected List<CT_GroupShapeProperties> GrpSpPr;
	@XmlElement(required = true, name = "sp")
	protected CT_Shape Sp;
	@XmlElement(required = true, name = "grpSp")
	protected CT_GroupShape GrpSp;
	@XmlElement(required = true, name = "graphicFrame")
	protected CT_GraphicFrame GraphicFrame;
	@XmlElement(required = true, name = "cxnSp")
	protected CT_Connector CxnSp;
	@XmlElement(required = true, name = "pic")
	protected CT_Picture Pic;
}

public class EG_ObjectChoices {
	@XmlElement(required = true, name = "sp")
	protected CT_Shape Sp;
	@XmlElement(required = true, name = "grpSp")
	protected CT_GroupShape GrpSp;
	@XmlElement(required = true, name = "graphicFrame")
	protected CT_GraphicFrame GraphicFrame;
	@XmlElement(required = true, name = "cxnSp")
	protected CT_Connector CxnSp;
	@XmlElement(required = true, name = "pic")
	protected CT_Picture Pic;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlAttribute(required = true, name = "ST_MarkerCoordinate")
public class ST_MarkerCoordinate {
	protected Float ST_MarkerCoordinate;
}

public class CT_Marker {
	@XmlElement(required = true, name = "x")
	protected List<Float> X;
	@XmlElement(required = true, name = "y")
	protected List<Float> Y;
}

public class CT_RelSizeAnchor {
	protected EG_ObjectChoices EG_ObjectChoices;
	@XmlElement(required = true, name = "from")
	protected CT_Marker From;
	@XmlElement(required = true, name = "to")
	protected CT_Marker To;
}

public class CT_AbsSizeAnchor {
	protected EG_ObjectChoices EG_ObjectChoices;
	@XmlElement(required = true, name = "from")
	protected CT_Marker From;
	@XmlElement(required = true, name = "ext")
	protected CT_PositiveSize2D Ext;
}

public class EG_Anchor {
	@XmlElement(required = true, name = "relSizeAnchor")
	protected CT_RelSizeAnchor RelSizeAnchor;
	@XmlElement(required = true, name = "absSizeAnchor")
	protected CT_AbsSizeAnchor AbsSizeAnchor;
}

public class CT_Drawing {
	protected List<EG_Anchor> EG_Anchor;
}