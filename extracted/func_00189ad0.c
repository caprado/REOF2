void func_00189ad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x189ad0:
    /* FPU: andi.b $w0, $w0, 0x82 */                            // 0x00189ad0: andi.b $w0, $w0, 0x82
    /* FPU: adds_a.b $w0, $w0, $w3 */                           // 0x00189ad4: adds_a.b $w0, $w0, $w3
    /* FPU: ld.b $w0, 0x88($zero) */                            // 0x00189ad8: ld.b $w0, 0x88($zero)
    /* FPU: addu.qb $zero, $a1, $v1 */                          // 0x00189ae4: addu.qb $zero, $a1, $v1
    /* FPU: dpa.w.ph $ac0, $a1, $t1 */                          // 0x00189aec: dpa.w.ph $ac0, $a1, $t1
    a2 = a2 + -1;                                               // 0x00189af0: addiu $a2, $a2, -1
    a0 = a0 + 0x40;                                             // 0x00189af4: addiu $a0, $a0, 0x40
    if (a2 != 0) goto label_0x189ad0;                           // 0x00189af8: bnez $a2, 0x189ad0
    a1 = a1 + 0x40;                                             // 0x00189afc: addiu $a1, $a1, 0x40
    return;                                                     // 0x00189b00: jr $ra
    /* nop */                                                   // 0x00189b04: nop 
}