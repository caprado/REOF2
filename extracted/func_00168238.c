void func_00168238() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_8;
    
    sp = sp + -0x50;                                            // 0x00168238: addiu $sp, $sp, -0x50
    func_001580b0();  // 1580b0                                // 0x00168258: jal 0x1580b0
    a3 = sp + 0x10;                                             // 0x00168264: addiu $a3, $sp, 0x10
    if (s2 == 0) goto label_0x1682b4;                           // 0x00168274: beqz $s2, 0x1682b4
    t0 = sp + 0x14;                                             // 0x00168278: addiu $t0, $sp, 0x14
    func_001560c0();  // 1560c0                                // 0x0016827c: jal 0x1560c0
    /* nop */                                                   // 0x00168280: nop 
    v1 = 1 << 16;                                               // 0x00168284: lui $v1, 1
    v0 = local_14;                                              // 0x00168288: lw $v0, 0x14($sp)
    v0 = v0 & v1;                                               // 0x00168290: and $v0, $v0, $v1
    if (v0 == 0) goto label_0x1682b4;                           // 0x00168294: beqz $v0, 0x1682b4
    func_00157a90();  // 157a90                                // 0x0016829c: jal 0x157a90
    /* nop */                                                   // 0x001682a0: nop 
    func_00158228();  // 158228                                // 0x001682a4: jal 0x158228
    v1 = local_8;                                               // 0x001682ac: lw $v1, 8($sp)
    *(uint32_t*)(s3) = v1;                                      // 0x001682b0: sw $v1, 0($s3)
label_0x1682b4:
    return;                                                     // 0x001682c8: jr $ra
    sp = sp + 0x50;                                             // 0x001682cc: addiu $sp, $sp, 0x50
}