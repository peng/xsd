// Code generated by xgen. DO NOT EDIT.

// ContentType is media type, as per [RFC2045]
export type ContentType = string;

// ContentTypes is comma-separated list of media types, as per [RFC2045]
export type ContentTypes = string;

// Charset is a character encoding, as per [RFC2045]
export type Charset = string;

// Charsets is a space separated list of character encodings, as per [RFC2045]
export type Charsets = string;

// LanguageCode is a language code, as per [RFC3066]
export type LanguageCode = string;

// Character is a single character, as per section 2.2 of [XML]
export type Character = string;

// Number is one or more digits
export type Number = number;

// TabindexNumber is tabindex attribute specifies the position of the current element
//       in the tabbing order for the current document. This value must be
//       a number between 0 and 32767. User agents should ignore leading zeros.
export type TabindexNumber = number;

// LinkTypes is space-separated list of link types
export type LinkTypes = Array<string>;

// MediaDesc is single or comma-separated list of media descriptors
export type MediaDesc = string;

// URI is a Uniform Resource Identifier, see [RFC2396]
export type URI = string;

// UriList is a space separated list of Uniform Resource Identifiers
export type UriList = string;

// Datetime is date and time information. ISO date format
export type Datetime = string;

// Script is script expression
export type Script = string;

// StyleSheet is style sheet data
export type StyleSheet = string;

// Text is used for titles etc.
export type Text = string;

// FrameTarget is render in this frame
export type FrameTarget = string;

// Length is nn for pixels or nn% for percentage length
export type Length = string;

// MultiLength is pixel, percentage, or relative
export type MultiLength = string;

// Pixels is integer representing length in pixels
export type Pixels = number;

// Shape ...
export enum Shape {
	rect = 'rect',
	circle = 'circle',
	poly = 'poly',
	default = 'default',
}

// Coords is comma separated list of lengths
export type Coords = string;

// ImgAlign is used for object, applet, img, input and iframe
export enum ImgAlign {
	top = 'top',
	middle = 'middle',
	bottom = 'bottom',
	left = 'left',
	right = 'right',
}

// Color is a color using sRGB: #RRGGBB as Hex values
// 
//       There are also 16 widely known color names with their sRGB values:
// 
//       Black  = #000000    Green  = #008000
//       Silver = #C0C0C0    Lime   = #00FF00
//       Gray   = #808080    Olive  = #808000
//       White  = #FFFFFF    Yellow = #FFFF00
//       Maroon = #800000    Navy   = #000080
//       Red    = #FF0000    Blue   = #0000FF
//       Purple = #800080    Teal   = #008080
//       Fuchsia= #FF00FF    Aqua   = #00FFFF
export type Color = string;

// Coreattrs is core attributes common to most elements
//       id       document-wide unique id
//       class    space separated list of classes
//       style    associated style info
//       title    advisory title/amplification
export class Coreattrs {
	IdAttr: string | null;
	ClassAttr: Array<string> | null;
	StyleAttr: string | null;
	TitleAttr: string | null;
}

// I18n is internationalization attributes
//       lang        language code (backwards compatible)
//       xml:lang    language code (as per XML 1.0 spec)
//       dir         direction for weak/neutral text
export class I18n {
	LangAttr: string | null;
	XmlLangAttr: Lang | null;
	DirAttr: string | null;
}

// Events is attributes for common UI events
//       onclick     a pointer button was clicked
//       ondblclick  a pointer button was double clicked
//       onmousedown a pointer button was pressed down
//       onmouseup   a pointer button was released
//       onmousemove a pointer was moved onto the element
//       onmouseout  a pointer was moved away from the element
//       onkeypress  a key was pressed and released
//       onkeydown   a key was pressed down
//       onkeyup     a key was released
export class Events {
	OnclickAttr: string | null;
	OndblclickAttr: string | null;
	OnmousedownAttr: string | null;
	OnmouseupAttr: string | null;
	OnmouseoverAttr: string | null;
	OnmousemoveAttr: string | null;
	OnmouseoutAttr: string | null;
	OnkeypressAttr: string | null;
	OnkeydownAttr: string | null;
	OnkeyupAttr: string | null;
}

// Focus is attributes for elements that can get the focus
//       accesskey   accessibility key character
//       tabindex    position in tabbing order
//       onfocus     the element got the focus
//       onblur      the element lost the focus
export class Focus {
	AccesskeyAttr: string | null;
	TabindexAttr: number | null;
	OnfocusAttr: string | null;
	OnblurAttr: string | null;
}

// Attrs ...
export class Attrs {
}

// TextAlign is text alignment for p, div, h1-h6. The default is
//       align="left" for ltr headings, "right" for rtl
export class TextAlign {
	AlignAttr: string | null;
}

// SpecialExtra ...
export class SpecialExtra {
	Object: string;
	Applet: Applet;
	Img: string;
	Map: Map;
	Iframe: string;
	Source: Source;
	Macro: Macro;
}

// SpecialBasic ...
export class SpecialBasic {
	Br: string;
	Span: Span;
	Bdo: string;
}

// Special ...
export class Special {
	SpecialBasic: SpecialBasic;
	SpecialExtra: SpecialExtra;
}

// FontstyleExtra ...
export class FontstyleExtra {
	Big: Big;
	Small: Small;
	Font: Font;
	Basefont: Basefont;
}

// FontstyleBasic ...
export class FontstyleBasic {
	Tt: Tt;
	I: I;
	B: B;
	U: U;
	S: S;
	Strike: Strike;
}

// Fontstyle ...
export class Fontstyle {
	FontstyleBasic: FontstyleBasic;
	FontstyleExtra: FontstyleExtra;
}

// PhraseExtra ...
export class PhraseExtra {
	Sub: Sub;
	Sup: Sup;
}

// PhraseBasic ...
export class PhraseBasic {
	Em: Em;
	Strong: Strong;
	Dfn: Dfn;
	Code: Code;
	Q: Q;
	Samp: Samp;
	Kbd: Kbd;
	Var: Var;
	Cite: Cite;
	Abbr: Abbr;
	Acronym: Acronym;
}

// Phrase ...
export class Phrase {
	PhraseBasic: PhraseBasic;
	PhraseExtra: PhraseExtra;
}

// InlineForms ...
export class InlineForms {
	Input: string;
	Select: string;
	Textarea: string;
	Label: Label;
	Button: string;
}

// MiscInline ...
export class MiscInline {
	Ins: Ins;
	Del: Del;
	Script: string;
}

// Misc ...
export class Misc {
	Noscript: Noscript;
	MiscInline: MiscInline;
}

// Inline ...
export class Inline {
	A: A;
	Special: Special;
	Fontstyle: Fontstyle;
	Phrase: Phrase;
	InlineForms: InlineForms;
}

// Inline is "Inline" covers inline or "text-level" element
export class Inline {
	Inline: Inline;
	MiscInline: MiscInline;
}

// Heading ...
export class Heading {
	H1: H1;
	H2: H2;
	H3: H3;
	H4: H4;
	H5: H5;
	H6: H6;
}

// Lists ...
export class Lists {
	Ul: string;
	Ol: string;
	Dl: string;
	Menu: string;
	Dir: string;
}

// Blocktext ...
export class Blocktext {
	Pre: Pre;
	Hr: string;
	Blockquote: Blockquote;
	Address: Address;
	Center: Center;
	Noframes: Noframes;
}

// Block ...
export class Block {
	P: P;
	Div: Div;
	Isindex: Isindex;
	Fieldset: Fieldset;
	Table: Table;
	Heading: Heading;
	Lists: Lists;
	Blocktext: Blocktext;
}

// Flow is "Flow" mixes block and inline and is used for list items etc.
export class Flow {
	Block: Block;
	Inline: Inline;
	Misc: Misc;
	Form: string;
}

// AContent is a elements use "Inline" excluding a
export class AContent {
	Special: Special;
	Fontstyle: Fontstyle;
	Phrase: Phrase;
	InlineForms: InlineForms;
	MiscInline: MiscInline;
}

// PreContent is pre uses "Inline" excluding img, object, applet, big, small,
//       font, or basefont
export class PreContent {
	SpecialBasic: SpecialBasic;
	FontstyleBasic: FontstyleBasic;
	PhraseBasic: PhraseBasic;
	InlineForms: InlineForms;
	MiscInline: MiscInline;
	A: A;
}

// FormContent is form uses "Flow" excluding form
export class FormContent {
	Block: Block;
	Inline: Inline;
	Misc: Misc;
}

// ButtonContent is button uses "Flow" but excludes a, form, form controls, iframe
export class ButtonContent {
	Heading: Heading;
	Lists: Lists;
	Blocktext: Blocktext;
	Fontstyle: Fontstyle;
	Phrase: Phrase;
	Misc: Misc;
	P: P;
	Div: Div;
	Table: Table;
	Br: string;
	Span: Span;
	Bdo: string;
	Object: string;
	Applet: Applet;
	Img: string;
	Map: Map;
}

// HeadMisc ...
export class HeadMisc {
	Script: string;
	Style: Style;
	Meta: Meta;
	Link: Link;
	Object: string;
	Isindex: Isindex;
}

// Head ...
export class Head {
	I18n: I18n;
	IdAttr: string | null;
	ProfileAttr: string | null;
	HeadMisc: HeadMisc;
	Title: Title;
	Base: Base;
}

// Title ...
export class Title {
	I18n: I18n;
	IdAttr: string | null;
}

// Base ...
export class Base {
	IdAttr: string | null;
	HrefAttr: string | null;
	TargetAttr: string | null;
}

// Meta ...
export class Meta {
	I18n: I18n;
	IdAttr: string | null;
	HttpequivAttr: any | null;
	NameAttr: any | null;
	ContentAttr: any;
	SchemeAttr: any | null;
}

// Link ...
export class Link {
	Attrs: Attrs;
	CharsetAttr: string | null;
	HrefAttr: string | null;
	HreflangAttr: string | null;
	TypeAttr: string | null;
	RelAttr: Array<string> | null;
	RevAttr: Array<string> | null;
	MediaAttr: string | null;
	TargetAttr: string | null;
}

// Style ...
export class Style {
	I18n: I18n;
	IdAttr: string | null;
	TypeAttr: string;
	MediaAttr: string | null;
	TitleAttr: string | null;
	XmlSpaceAttr: Space | null;
}

// Script ...
export class Script {
	IdAttr: string | null;
	CharsetAttr: string | null;
	TypeAttr: string;
	LanguageAttr: any | null;
	SrcAttr: string | null;
	DeferAttr: string | null;
	XmlSpaceAttr: Space | null;
}

// Noscript ...
export class Noscript extends Flow  {
	Attrs: Attrs;
}

// Iframe ...
export class Iframe extends Flow  {
	Coreattrs: Coreattrs;
	LongdescAttr: string | null;
	NameAttr: string | null;
	SrcAttr: string | null;
	FrameborderAttr: string | null;
	MarginwidthAttr: number | null;
	MarginheightAttr: number | null;
	ScrollingAttr: string | null;
	AlignAttr: string | null;
	HeightAttr: string | null;
	WidthAttr: string | null;
}

// Noframes ...
export class Noframes extends Flow  {
	Attrs: Attrs;
}

// Div ...
export class Div extends Flow  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// P ...
export class P extends Inline  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// H1 ...
export class H1 extends Inline  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// H2 ...
export class H2 extends Inline  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// H3 ...
export class H3 extends Inline  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// H4 ...
export class H4 extends Inline  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// H5 ...
export class H5 extends Inline  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// H6 ...
export class H6 extends Inline  {
	Attrs: Attrs;
	TextAlign: TextAlign;
}

// ULStyle is Unordered list bullet styles
export enum ULStyle {
	disc = 'disc',
	square = 'square',
	circle = 'circle',
}

// Ul ...
export class Ul {
	Attrs: Attrs;
	TypeAttr: string | null;
	CompactAttr: string | null;
	Ul: string;
}

// OLStyle is Ordered list numbering style
// 
//       1   arabic numbers      1, 2, 3, ...
//       a   lower alpha         a, b, c, ...
//       A   upper alpha         A, B, C, ...
//       i   lower roman         i, ii, iii, ...
//       I   upper roman         I, II, III, ...
// 
//       The style is applied to the sequence number which by default
//       is reset to 1 for the first list item in an ordered list.
export type OLStyle = string;

// Ol ...
export class Ol {
	Attrs: Attrs;
	TypeAttr: string | null;
	CompactAttr: string | null;
	StartAttr: number | null;
	Ol: string;
}

// Menu ...
export class Menu {
	Attrs: Attrs;
	CompactAttr: string | null;
	Menu: string;
}

// Dir ...
export class Dir {
	Attrs: Attrs;
	CompactAttr: string | null;
	Dir: string;
}

// LIStyle is LIStyle is constrained to: "(ULStyle|OLStyle)"
export type LIStyle = string;

// Li ...
export class Li extends Flow  {
	Attrs: Attrs;
	TypeAttr: string | null;
	ValueAttr: number | null;
}

// Dl ...
export class Dl {
	Attrs: Attrs;
	CompactAttr: string | null;
	Dt: Dt;
	Dl: string;
}

// Dt ...
export class Dt extends Inline  {
	Attrs: Attrs;
}

// Dd ...
export class Dd extends Flow  {
	Attrs: Attrs;
}

// Address ...
export class Address {
	Attrs: Attrs;
	Inline: Inline;
	MiscInline: MiscInline;
	P: P;
}

// Hr ...
export class Hr {
	Attrs: Attrs;
	AlignAttr: string | null;
	NoshadeAttr: string | null;
	SizeAttr: number | null;
	WidthAttr: string | null;
}

// Pre ...
export class Pre extends PreContent  {
	Attrs: Attrs;
	WidthAttr: number | null;
	XmlSpaceAttr: Space | null;
}

// Blockquote ...
export class Blockquote extends Flow  {
	Attrs: Attrs;
	CiteAttr: string | null;
}

// Center ...
export class Center extends Flow  {
	Attrs: Attrs;
}

// Ins ...
export class Ins extends Flow  {
	Attrs: Attrs;
	CiteAttr: string | null;
	DatetimeAttr: string | null;
}

// Del ...
export class Del extends Flow  {
	Attrs: Attrs;
	CiteAttr: string | null;
	DatetimeAttr: string | null;
}

// A ...
export class A extends AContent  {
	Attrs: Attrs;
	Focus: Focus;
	CharsetAttr: string | null;
	TypeAttr: string | null;
	NameAttr: string | null;
	HrefAttr: string | null;
	HreflangAttr: string | null;
	RelAttr: Array<string> | null;
	RevAttr: Array<string> | null;
	ShapeAttr: string | null;
	CoordsAttr: string | null;
	TargetAttr: string | null;
}

// Span ...
export class Span extends Inline  {
	Attrs: Attrs;
}

// Bdo ...
export class Bdo extends Inline  {
	Coreattrs: Coreattrs;
	Events: Events;
	LangAttr: string | null;
	XmlLangAttr: Lang | null;
	DirAttr: string;
}

// Br ...
export class Br {
	Coreattrs: Coreattrs;
	ClearAttr: string | null;
}

// Em ...
export class Em extends Inline  {
	Attrs: Attrs;
}

// Strong ...
export class Strong extends Inline  {
	Attrs: Attrs;
}

// Dfn ...
export class Dfn extends Inline  {
	Attrs: Attrs;
}

// Code ...
export class Code extends Inline  {
	Attrs: Attrs;
}

// Samp ...
export class Samp extends Inline  {
	Attrs: Attrs;
}

// Kbd ...
export class Kbd extends Inline  {
	Attrs: Attrs;
}

// Var ...
export class Var extends Inline  {
	Attrs: Attrs;
}

// Cite ...
export class Cite extends Inline  {
	Attrs: Attrs;
}

// Abbr ...
export class Abbr extends Inline  {
	Attrs: Attrs;
}

// Acronym ...
export class Acronym extends Inline  {
	Attrs: Attrs;
}

// Q ...
export class Q extends Inline  {
	Attrs: Attrs;
	CiteAttr: string | null;
}

// Sub ...
export class Sub extends Inline  {
	Attrs: Attrs;
}

// Sup ...
export class Sup extends Inline  {
	Attrs: Attrs;
}

// Tt ...
export class Tt extends Inline  {
	Attrs: Attrs;
}

// I ...
export class I extends Inline  {
	Attrs: Attrs;
}

// B ...
export class B extends Inline  {
	Attrs: Attrs;
}

// Big ...
export class Big extends Inline  {
	Attrs: Attrs;
}

// Small ...
export class Small extends Inline  {
	Attrs: Attrs;
}

// U ...
export class U extends Inline  {
	Attrs: Attrs;
}

// S ...
export class S extends Inline  {
	Attrs: Attrs;
}

// Strike ...
export class Strike extends Inline  {
	Attrs: Attrs;
}

// Basefont ...
export class Basefont {
	IdAttr: string | null;
	SizeAttr: any;
	ColorAttr: string | null;
	FaceAttr: any | null;
}

// Font ...
export class Font extends Inline  {
	Coreattrs: Coreattrs;
	I18n: I18n;
	SizeAttr: any | null;
	ColorAttr: string | null;
	FaceAttr: any | null;
}

// Object ...
export class Object {
	Attrs: Attrs;
	DeclareAttr: string | null;
	ClassidAttr: string | null;
	CodebaseAttr: string | null;
	DataAttr: string | null;
	TypeAttr: string | null;
	CodetypeAttr: string | null;
	ArchiveAttr: string | null;
	StandbyAttr: string | null;
	HeightAttr: string | null;
	WidthAttr: string | null;
	UsemapAttr: string | null;
	NameAttr: string | null;
	TabindexAttr: number | null;
	AlignAttr: string | null;
	BorderAttr: number | null;
	HspaceAttr: number | null;
	VspaceAttr: number | null;
	Block: Block;
	Inline: Inline;
	Misc: Misc;
	Param: string;
	Object: string;
}

// Param ...
export class Param {
	IdAttr: string | null;
	NameAttr: any;
	ValueAttr: any | null;
	ValuetypeAttr: string | null;
	TypeAttr: string | null;
}

// Applet ...
export class Applet {
	Coreattrs: Coreattrs;
	CodebaseAttr: string | null;
	ArchiveAttr: any | null;
	CodeAttr: any | null;
	ObjectAttr: any | null;
	AltAttr: string | null;
	NameAttr: string | null;
	WidthAttr: string;
	HeightAttr: string;
	AlignAttr: string | null;
	HspaceAttr: number | null;
	VspaceAttr: number | null;
	Block: Block;
	Inline: Inline;
	Misc: Misc;
	Param: string;
	Form: string;
}

// Img ...
export class Img {
	Attrs: Attrs;
	SrcAttr: string;
	AltAttr: string;
	NameAttr: string | null;
	LongdescAttr: string | null;
	HeightAttr: string | null;
	WidthAttr: string | null;
	UsemapAttr: string | null;
	IsmapAttr: string | null;
	AlignAttr: string | null;
	BorderAttr: string | null;
	HspaceAttr: number | null;
	VspaceAttr: number | null;
}

// Map ...
export class Map {
	I18n: I18n;
	Events: Events;
	IdAttr: string;
	ClassAttr: any | null;
	StyleAttr: string | null;
	TitleAttr: string | null;
	NameAttr: any | null;
	Block: Block;
	Misc: Misc;
	Form: string;
	Area: string;
}

// Area ...
export class Area {
	Attrs: Attrs;
	Focus: Focus;
	ShapeAttr: string | null;
	CoordsAttr: string | null;
	HrefAttr: string | null;
	NohrefAttr: string | null;
	AltAttr: string;
	TargetAttr: string | null;
}

// Form ...
export class Form extends FormContent  {
	Attrs: Attrs;
	ActionAttr: string;
	MethodAttr: string | null;
	EnctypeAttr: string | null;
	OnsubmitAttr: string | null;
	OnresetAttr: string | null;
	AcceptAttr: string | null;
	AcceptcharsetAttr: string | null;
	TargetAttr: string | null;
}

// Label ...
export class Label extends Inline  {
	Attrs: Attrs;
	ForAttr: string | null;
	AccesskeyAttr: string | null;
	OnfocusAttr: string | null;
	OnblurAttr: string | null;
}

// InputType ...
export enum InputType {
	text = 'text',
	password = 'password',
	checkbox = 'checkbox',
	radio = 'radio',
	submit = 'submit',
	reset = 'reset',
	file = 'file',
	hidden = 'hidden',
	image = 'image',
	button = 'button',
}

// Input ...
export class Input {
	Attrs: Attrs;
	Focus: Focus;
	TypeAttr: string | null;
	NameAttr: any | null;
	ValueAttr: any | null;
	CheckedAttr: string | null;
	DisabledAttr: string | null;
	ReadonlyAttr: string | null;
	SizeAttr: any | null;
	MaxlengthAttr: number | null;
	SrcAttr: string | null;
	AltAttr: any | null;
	UsemapAttr: string | null;
	OnselectAttr: string | null;
	OnchangeAttr: string | null;
	AcceptAttr: string | null;
	AlignAttr: string | null;
}

// Select ...
export class Select {
	Attrs: Attrs;
	NameAttr: any | null;
	SizeAttr: number | null;
	MultipleAttr: string | null;
	DisabledAttr: string | null;
	TabindexAttr: number | null;
	OnfocusAttr: string | null;
	OnblurAttr: string | null;
	OnchangeAttr: string | null;
	Optgroup: string;
	Select: string;
}

// Optgroup ...
export class Optgroup {
	Attrs: Attrs;
	DisabledAttr: string | null;
	LabelAttr: string;
	Optgroup: string;
}

// Option ...
export class Option {
	Attrs: Attrs;
	SelectedAttr: string | null;
	DisabledAttr: string | null;
	LabelAttr: string | null;
	ValueAttr: any | null;
}

// Textarea ...
export class Textarea {
	Attrs: Attrs;
	Focus: Focus;
	NameAttr: any | null;
	RowsAttr: number;
	ColsAttr: number;
	DisabledAttr: string | null;
	ReadonlyAttr: string | null;
	OnselectAttr: string | null;
	OnchangeAttr: string | null;
}

// Fieldset ...
export class Fieldset {
	Attrs: Attrs;
	Block: Block;
	Inline: Inline;
	Misc: Misc;
	Legend: Legend;
	Form: string;
}

// LAlign ...
export enum LAlign {
	top = 'top',
	bottom = 'bottom',
	left = 'left',
	right = 'right',
}

// Legend ...
export class Legend extends Inline  {
	Attrs: Attrs;
	AccesskeyAttr: string | null;
	AlignAttr: string | null;
}

// Button ...
export class Button extends ButtonContent  {
	Attrs: Attrs;
	Focus: Focus;
	NameAttr: any | null;
	ValueAttr: any | null;
	TypeAttr: string | null;
	DisabledAttr: string | null;
}

// Isindex ...
export class Isindex {
	Coreattrs: Coreattrs;
	I18n: I18n;
	PromptAttr: string | null;
}

// TFrame is The border attribute sets the thickness of the frame around the
//       table. The default units are screen pixels.
// 
//       The frame attribute specifies which parts of the frame around
//       the table should be rendered. The values are not the same as
//       CALS to avoid a name clash with the valign attribute.
export enum TFrame {
	void = 'void',
	above = 'above',
	below = 'below',
	hsides = 'hsides',
	lhs = 'lhs',
	rhs = 'rhs',
	vsides = 'vsides',
	box = 'box',
	border = 'border',
}

// TRules is The rules attribute defines which rules to draw between cells:
// 
//       If rules is absent then assume:
//           "none" if border is absent or border="0" otherwise "all"
export enum TRules {
	none = 'none',
	groups = 'groups',
	rows = 'rows',
	cols = 'cols',
	all = 'all',
}

// TAlign is horizontal placement of table relative to document
export enum TAlign {
	left = 'left',
	center = 'center',
	right = 'right',
}

// Cellhalign is horizontal alignment attributes for cell contents
// 
//       char        alignment char, e.g. char=':'
//       charoff     offset for alignment char
export class Cellhalign {
	AlignAttr: string | null;
	CharAttr: string | null;
	CharoffAttr: string | null;
}

// Cellvalign is vertical alignment attributes for cell contents
export class Cellvalign {
	ValignAttr: string | null;
}

// Table ...
export class Table {
	Attrs: Attrs;
	SummaryAttr: string | null;
	WidthAttr: string | null;
	BorderAttr: number | null;
	FrameAttr: string | null;
	RulesAttr: string | null;
	CellspacingAttr: string | null;
	CellpaddingAttr: string | null;
	AlignAttr: string | null;
	BgcolorAttr: string | null;
	Caption: Caption;
	Col: Array<Col>;
	Colgroup: Array<Colgroup>;
	Thead: Thead;
	Tfoot: Tfoot;
	Tbody: Array<Tbody>;
	Tr: Array<Tr>;
}

// CAlign ...
export enum CAlign {
	top = 'top',
	bottom = 'bottom',
	left = 'left',
	right = 'right',
}

// Caption ...
export class Caption extends Inline  {
	Attrs: Attrs;
	AlignAttr: string | null;
}

// Thead ...
export class Thead {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	Tr: Array<Tr>;
}

// Tfoot ...
export class Tfoot {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	Tr: Array<Tr>;
}

// Tbody ...
export class Tbody {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	Tr: Array<Tr>;
}

// Colgroup ...
export class Colgroup {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	SpanAttr: number | null;
	WidthAttr: string | null;
	Col: Array<Col>;
}

// Col ...
export class Col {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	SpanAttr: number | null;
	WidthAttr: string | null;
}

// Tr ...
export class Tr {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	BgcolorAttr: string | null;
	Th: string;
	Td: string;
}

// Scope is Scope is simpler than headers attribute for common tables
export enum Scope {
	row = 'row',
	col = 'col',
	rowgroup = 'rowgroup',
	colgroup = 'colgroup',
}

// Th ...
export class Th extends Flow  {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	AbbrAttr: string | null;
	AxisAttr: any | null;
	HeadersAttr: Array<string> | null;
	ScopeAttr: string | null;
	RowspanAttr: number | null;
	ColspanAttr: number | null;
	NowrapAttr: string | null;
	BgcolorAttr: string | null;
	WidthAttr: string | null;
	HeightAttr: string | null;
}

// Td ...
export class Td extends Flow  {
	Attrs: Attrs;
	Cellhalign: Cellhalign;
	Cellvalign: Cellvalign;
	AbbrAttr: string | null;
	AxisAttr: any | null;
	HeadersAttr: Array<string> | null;
	ScopeAttr: string | null;
	RowspanAttr: number | null;
	ColspanAttr: number | null;
	NowrapAttr: string | null;
	BgcolorAttr: string | null;
	WidthAttr: string | null;
	HeightAttr: string | null;
}

// Document ...
export class Document {
	I18n: I18n;
	IdAttr: string | null;
	Properties: Properties;
	Head: Head;
	Body: Body;
}

// Properties ...
export class Properties {
	Title: Title;
	Author: Array<Author>;
	Date: string;
}

// Author ...
export class Author {
	EmailAttr: string | null;
}

// Date ...
export class Date {
}

// Body ...
export class Body {
	Attrs: Attrs;
	Section: Array<Section>;
}

// Section ...
export class Section {
	Attrs: Attrs;
	NameAttr: string;
	Block: Block;
	Inline: Inline;
	Misc: Misc;
	Form: string;
	Subsection: Subsection;
}

// Subsection ...
export class Subsection {
	Attrs: Attrs;
	NameAttr: string;
	Block: Block;
	Inline: Inline;
	Misc: Misc;
	Form: string;
}

// Source ...
export class Source {
}

// Macro ...
export class Macro {
	NameAttr: string;
	Param: string;
}
