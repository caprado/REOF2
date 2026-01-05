void func_00139988() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00139988: addiu $sp, $sp, -0x10
    if (v0 != 0) goto label_0x1399b0;                           // 0x00139990: bnez $v0, 0x1399b0
    a1 = 0x22 << 16;                                            // 0x00139998: lui $a1, 0x22
    func_001392b8();  // 1392b8                                // 0x0013999c: jal 0x1392b8
    a1 = &str_00225468;  // "E0092913:nsct < 0.(dvCiReqRd)"     // 0x001399a0: addiu $a1, $a1, 0x5468
    goto label_0x1399b4;                                        // 0x001399a4: b 0x1399b4
    /* nop */                                                   // 0x001399ac: nop 
label_0x1399b0:
    v0 = *(int32_t*)((v0) + 0xc);                               // 0x001399b0: lw $v0, 0xc($v0)
label_0x1399b4:
    return;                                                     // 0x001399b8: jr $ra
    sp = sp + 0x10;                                             // 0x001399bc: addiu $sp, $sp, 0x10
}