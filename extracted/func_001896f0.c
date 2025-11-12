void func_001896f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v0 = -0x4000;                                               // 0x001896f0: addiu $v0, $zero, -0x4000
    v1 = 2;                                                     // 0x001896f4: addiu $v1, $zero, 2
    v0 = v0 & v0;                                               // 0x001896f8: and $v0, $v0, $v0
    a2 = 0xffff << 16;                                          // 0x001896fc: lui $a2, 0xffff
    a2 = a2 | 0x3fff;                                           // 0x00189700: ori $a2, $a2, 0x3fff
    v0 = v0 | v1;                                               // 0x00189704: or $v0, $v0, $v1
    a3 = 0 | 0x8000;                                            // 0x00189708: ori $a3, $zero, 0x8000
    v0 = v0 & a2;                                               // 0x0018970c: and $v0, $v0, $a2
    v1 = 0xff00 << 16;                                          // 0x00189710: lui $v1, 0xff00
    v1 = v1 | 0xffff;                                           // 0x00189714: ori $v1, $v1, 0xffff
    v0 = v0 | a3;                                               // 0x00189718: or $v0, $v0, $a3
    a2 = 3 << 16;                                               // 0x0018971c: lui $a2, 3
    v0 = v0 & v1;                                               // 0x00189720: and $v0, $v0, $v1
    v0 = v0 | a2;                                               // 0x00189728: or $v0, $v0, $a2
    t0 = -1;                                                    // 0x0018972c: addiu $t0, $zero, -1
    t0 = t0 | 0xff;                                             // 0x00189734: ori $t0, $t0, 0xff
    t0 = t0 | 0xffff;                                           // 0x0018973c: ori $t0, $t0, 0xffff
    sp = sp + -0x20;                                            // 0x00189740: addiu $sp, $sp, -0x20
    v0 = v0 & t0;                                               // 0x00189744: and $v0, $v0, $t0
    a1 = 0x100 << 16;                                           // 0x00189748: lui $a1, 0x100
    func_001896c8();  // 0x1895d8                                // 0x00189754: jal 0x1895d8
    a1 = v0 | a1;                                               // 0x00189758: or $a1, $v0, $a1
    if (v0 >= 0) goto label_0x189764;                           // 0x0018975c: bgezl $v0, 0x189764
    v0 = local_0;                                               // 0x00189760: lw $v0, 0($sp)
label_0x189764:
    return;                                                     // 0x00189768: jr $ra
    sp = sp + 0x20;                                             // 0x0018976c: addiu $sp, $sp, 0x20
}