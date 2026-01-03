void func_001a4e90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a4e90: addiu $sp, $sp, -0x20
    func_001a53c0();  // 1a53c0                                // 0x001a4e9c: jal 0x1a53c0
    if (v0 != 0) goto label_0x1a4eb4;                           // 0x001a4ea4: bnez $v0, 0x1a4eb4
    goto label_0x1a4ec8;                                        // 0x001a4eac: b 0x1a4ec8
label_0x1a4eb4:
    func_001a54d0();  // 1a54d0                                // 0x001a4eb4: jal 0x1a54d0
    v0 = *(uint8_t*)((v0) + 0x11);                              // 0x001a4ebc: lbu $v0, 0x11($v0)
    v0 = v0 + -1;                                               // 0x001a4ec0: addiu $v0, $v0, -1
    v0 = v0 & 0xff;                                             // 0x001a4ec4: andi $v0, $v0, 0xff
label_0x1a4ec8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a4ecc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a4ed0: jr $ra
    sp = sp + 0x20;                                             // 0x001a4ed4: addiu $sp, $sp, 0x20
}