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
@XmlElement(required = true, name = "toolchains")
public class Toolchains {
	protected PersistedToolchains Toolchains;
}

public class PersistedToolchains {
	@XmlElement(required = true, name = "toolchain")
	protected List<ToolchainModel> Toolchain;
}

public class Provides {
}

public class Configuration {
}

public class ToolchainModel {
	@XmlElement(required = true, name = "type")
	protected String Type;
	@XmlElement(required = true, name = "provides")
	protected Provides Provides;
	@XmlElement(required = true, name = "configuration")
	protected Configuration Configuration;
}