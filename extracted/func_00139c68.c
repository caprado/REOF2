void func_00139c68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00139c68: addiu $sp, $sp, -0x10
    if (v0 != 0) goto label_0x139c90;                           // 0x00139c70: bnez $v0, 0x139c90
    a1 = 0x22 << 16;                                            // 0x00139c78: lui $a1, 0x22
    func_001392e8();  // 0x1392b8                                // 0x00139c7c: jal 0x1392b8
    a1 = &str_00225468;  // "E0092913:nsct < 0.(dvCiReqRd)"     // 0x00139c80: addiu $a1, $a1, 0x5468
    goto label_0x139c94;                                        // 0x00139c84: b 0x139c94
    /* nop */                                                   // 0x00139c8c: nop 
label_0x139c90:
    v0 = *(int8_t*)((v0) + 2);                                  // 0x00139c90: lb $v0, 2($v0)
label_0x139c94:
    return;                                                     // 0x00139c98: jr $ra
    sp = sp + 0x10;                                             // 0x00139c9c: addiu $sp, $sp, 0x10
}