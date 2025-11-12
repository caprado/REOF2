void func_001898e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = *(int32_t*)((a0) + 0x14);                              // 0x001898e0: lw $t0, 0x14($a0)
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x001898e4: lw $v0, 0xc($a0)
    v1 = *(int32_t*)((a0) + 0x10);                              // 0x001898e8: lw $v1, 0x10($a0)
    a3 = t0 + -1;                                               // 0x001898ec: addiu $a3, $t0, -1
    a1 = a1 + t0;                                               // 0x001898f0: addu $a1, $a1, $t0
    a3 = ~a3;                                                   // 0x001898f4: not $a3, $a3
    a1 = a1 + -1;                                               // 0x001898f8: addiu $a1, $a1, -1
    a1 = a3 & a1;                                               // 0x001898fc: and $a1, $a3, $a1
    a3 = v0 + a1;                                               // 0x00189900: addu $a3, $v0, $a1
    at = ((unsigned)v1 < (unsigned)a3) ? 1 : 0;                 // 0x00189904: sltu $at, $v1, $a3
    if (at == 0) goto label_0x189918;                           // 0x00189908: beqz $at, 0x189918
    /* nop */                                                   // 0x0018990c: nop 
    goto label_0x189934;                                        // 0x00189910: b 0x189934
label_0x189918:
    if (a2 == 0) goto label_0x189930;                           // 0x00189918: beqz $a2, 0x189930
    /* nop */                                                   // 0x0018991c: nop 
    v0 = v1 - a1;                                               // 0x00189920: subu $v0, $v1, $a1
    *(uint32_t*)((a0) + 0x10) = v0;                             // 0x00189924: sw $v0, 0x10($a0)
    goto label_0x189934;                                        // 0x00189928: b 0x189934
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0018992c: lw $v0, 0x10($a0)
label_0x189930:
    *(uint32_t*)((a0) + 0xc) = a3;                              // 0x00189930: sw $a3, 0xc($a0)
label_0x189934:
    return;                                                     // 0x00189934: jr $ra
    /* nop */                                                   // 0x00189938: nop 
}