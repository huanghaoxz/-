package com.antell.cloudhands.api.packet.udp.dns;

/**
 * Mailbox Rename Record  - specifies a rename of a mailbox.
 *
 */

public class MRRecord extends SingleNameBase {

    private static final long serialVersionUID = -5617939094209927533L;

    public MRRecord() {
    }

    @Override
    public Record getObject() {
        return new MRRecord();
    }

    /**
     * Creates a new MR Record with the given data
     *
     * @param newName The new name of the mailbox specified by the domain.
     *                domain.
     */
    public MRRecord(Name name, int dclass, long ttl, Name newName) {
        super(name, Type.MR, dclass, ttl, newName, "new name");
    }

    /**
     * Gets the new name of the mailbox specified by the domain
     */
    public Name getNewName() {
        return getSingleName();
    }

}