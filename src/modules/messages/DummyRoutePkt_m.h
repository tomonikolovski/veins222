//
// Generated file, do not edit! Created by nedtool 4.6 from messages/DummyRoutePkt.msg.
//

#ifndef _DUMMYROUTEPKT_M_H_
#define _DUMMYROUTEPKT_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include <NetwPkt_m.h>
// }}

/**
 * Class generated from <tt>messages/DummyRoutePkt.msg:9</tt> by nedtool.
 * <pre>
 * message DummyRoutePkt extends NetwPkt
 * {
 *     int networkID;
 * }
 * </pre>
 */
class DummyRoutePkt : public ::NetwPkt
{
  protected:
    int networkID_var;

  private:
    void copy(const DummyRoutePkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DummyRoutePkt&);

  public:
    DummyRoutePkt(const char *name=NULL, int kind=0);
    DummyRoutePkt(const DummyRoutePkt& other);
    virtual ~DummyRoutePkt();
    DummyRoutePkt& operator=(const DummyRoutePkt& other);
    virtual DummyRoutePkt *dup() const {return new DummyRoutePkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getNetworkID() const;
    virtual void setNetworkID(int networkID);
};

inline void doPacking(cCommBuffer *b, DummyRoutePkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DummyRoutePkt& obj) {obj.parsimUnpack(b);}


#endif // ifndef _DUMMYROUTEPKT_M_H_
