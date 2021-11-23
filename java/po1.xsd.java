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
import javax.xml.bind.annotation.XmlValue;

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "purchaseOrder")
public class PurchaseOrder {
	protected PurchaseOrderType PurchaseOrder;
}

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "comment")
public class Comment {
	protected String Comment;
}

// PurchaseOrderType ...
public class PurchaseOrderType {
	@XmlElement(required = true, name = "shipTo")
	protected USAddress ShipTo;
	@XmlElement(required = true, name = "billTo")
	protected USAddress BillTo;
	@XmlElement(required = true, name = "po:comment")
	protected String PoComment;
}

// USAddress ...
public class USAddress {
	@XmlElement(required = true, name = "name")
	protected String Name;
	@XmlElement(required = true, name = "street")
	protected String Street;
}
