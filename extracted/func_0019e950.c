void func_0019e950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x19e970;                                        // 0x0019e950: b 0x19e970
    v0 = *(int32_t*)((gp) + -0x647c);                           // 0x0019e954: lw $v0, -0x647c($gp)
label_0x19e958:
    v1 = *(int32_t*)((v0) + 8);                                 // 0x0019e958: lw $v1, 8($v0)
    if (v1 != a0) goto label_0x19e96c;                          // 0x0019e95c: bne $v1, $a0, 0x19e96c
    /* nop */                                                   // 0x0019e960: nop 
    goto label_0x19e97c;                                        // 0x0019e964: b 0x19e97c
    /* nop */                                                   // 0x0019e968: nop 
label_0x19e96c:
    v0 = *(int32_t*)((v0) + 4);                                 // 0x0019e96c: lw $v0, 4($v0)
label_0x19e970:
    if (v0 != 0) goto label_0x19e958;                           // 0x0019e970: bnez $v0, 0x19e958
    /* nop */                                                   // 0x0019e974: nop 
label_0x19e97c:
    return;                                                     // 0x0019e97c: jr $ra
    /* nop */                                                   // 0x0019e980: nop 
}