void func_00103650() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00103650: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x00103654: addiu $v0, $zero, 1
    if (a1 != v0) goto label_0x103670;                          // 0x00103658: bne $a1, $v0, 0x103670
    v0 = *(int32_t*)(a0);                                       // 0x00103660: lw $v0, 0($a0)
    v0 = (unsigned)v0 >> 8;                                     // 0x00103664: srl $v0, $v0, 8
    goto label_0x10367c;                                        // 0x00103668: b 0x10367c
    v0 = v0 & 1;                                                // 0x0010366c: andi $v0, $v0, 1
label_0x103670:
    func_00102f98();  // 0x102f28                                // 0x00103670: jal 0x102f28
    /* nop */                                                   // 0x00103674: nop 
label_0x10367c:
    return;                                                     // 0x00103680: jr $ra
    sp = sp + 0x10;                                             // 0x00103684: addiu $sp, $sp, 0x10
}