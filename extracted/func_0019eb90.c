void func_0019eb90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019eb90: addiu $sp, $sp, -0x10
    goto label_0x19eba4;                                        // 0x0019eb94: b 0x19eba4
label_0x19eb9c:
    func_0019e880();  // 19e880                                // 0x0019eb9c: jal 0x19e880
    /* nop */                                                   // 0x0019eba0: nop 
label_0x19eba4:
    a0 = *(int32_t*)((gp) + -0x647c);                           // 0x0019eba4: lw $a0, -0x647c($gp)
    /* nop */                                                   // 0x0019eba8: nop 
    /* nop */                                                   // 0x0019ebac: nop 
    /* nop */                                                   // 0x0019ebb0: nop 
    if (a0 != 0) goto label_0x19eb9c;                           // 0x0019ebb4: bnez $a0, 0x19eb9c
    /* nop */                                                   // 0x0019ebb8: nop 
    v0 = 1;                                                     // 0x0019ebc0: addiu $v0, $zero, 1
    return;                                                     // 0x0019ebc4: jr $ra
    sp = sp + 0x10;                                             // 0x0019ebc8: addiu $sp, $sp, 0x10
}