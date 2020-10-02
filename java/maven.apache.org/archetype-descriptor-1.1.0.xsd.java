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

@XmlAccessorType(XmlAccessType.FIELD)
@XmlElement(required = true, name = "archetype-descriptor")
public class Archetypedescriptor {
	protected ArchetypeDescriptor Archetypedescriptor;
}

public class RequiredProperties {
	@XmlElement(required = true, name = "requiredProperty")
	protected List<RequiredProperty> RequiredProperty;
}

public class FileSets {
	@XmlElement(required = true, name = "fileSet")
	protected List<FileSet> FileSet;
}

public class Modules {
	@XmlElement(required = true, name = "module")
	protected List<ModuleDescriptor> Module;
}

public class ArchetypeDescriptor {
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlAttribute(name = "partial")
	protected BooleanAttr Partial;
	@XmlElement(required = true, name = "requiredProperties")
	protected RequiredProperties RequiredProperties;
	@XmlElement(required = true, name = "fileSets")
	protected FileSets FileSets;
	@XmlElement(required = true, name = "modules")
	protected Modules Modules;
}

public class RequiredProperty {
	@XmlAttribute(name = "key", required = true)
	protected StringAttr Key;
	@XmlElement(required = true, name = "defaultValue")
	protected String DefaultValue;
	@XmlElement(required = true, name = "validationRegex")
	protected String ValidationRegex;
}

public class ModuleDescriptor {
	@XmlAttribute(name = "id", required = true)
	protected StringAttr Id;
	@XmlAttribute(name = "dir", required = true)
	protected StringAttr Dir;
	@XmlAttribute(name = "name", required = true)
	protected StringAttr Name;
	@XmlElement(required = true, name = "fileSets")
	protected FileSets FileSets;
	@XmlElement(required = true, name = "modules")
	protected Modules Modules;
}

public class Includes {
	@XmlElement(required = true, name = "include")
	protected List<String> Include;
}

public class Excludes {
	@XmlElement(required = true, name = "exclude")
	protected List<String> Exclude;
}

public class FileSet {
	@XmlAttribute(name = "filtered")
	protected BooleanAttr Filtered;
	@XmlAttribute(name = "packaged")
	protected BooleanAttr Packaged;
	@XmlAttribute(name = "encoding")
	protected StringAttr Encoding;
	@XmlElement(required = true, name = "directory")
	protected String Directory;
	@XmlElement(required = true, name = "includes")
	protected Includes Includes;
	@XmlElement(required = true, name = "excludes")
	protected Excludes Excludes;
}