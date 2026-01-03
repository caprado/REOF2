void func_0019ebd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019ebd0: addiu $sp, $sp, -0x10
    func_0019e950();  // 19e950                                // 0x0019ebd8: jal 0x19e950
    /* nop */                                                   // 0x0019ebdc: nop 
    if (v0 == 0) goto label_0x19ebf0;                           // 0x0019ebe0: beqz $v0, 0x19ebf0
    func_0019e880();  // 19e880                                // 0x0019ebe8: jal 0x19e880
    /* nop */                                                   // 0x0019ebec: nop 
label_0x19ebf0:
    v0 = 1;                                                     // 0x0019ebf4: addiu $v0, $zero, 1
    return;                                                     // 0x0019ebf8: jr $ra
    sp = sp + 0x10;                                             // 0x0019ebfc: addiu $sp, $sp, 0x10
}