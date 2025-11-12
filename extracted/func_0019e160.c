void func_0019e160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019e160: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0019e164: addiu $v0, $zero, 1
    if (t0 == v0) goto label_0x19e190;                          // 0x0019e168: beq $t0, $v0, 0x19e190
    if (t0 == 0) goto label_0x19e180;                           // 0x0019e170: beqz $t0, 0x19e180
    /* nop */                                                   // 0x0019e174: nop 
    goto label_0x19e19c;                                        // 0x0019e178: b 0x19e19c
    v0 = -1;                                                    // 0x0019e17c: addiu $v0, $zero, -1
label_0x19e180:
    func_0019e2f0();  // 0x19e1b0                                // 0x0019e180: jal 0x19e1b0
    /* nop */                                                   // 0x0019e184: nop 
    goto label_0x19e19c;                                        // 0x0019e188: b 0x19e19c
label_0x19e190:
    func_0019e630();  // 0x19e4f0                                // 0x0019e190: jal 0x19e4f0
    /* nop */                                                   // 0x0019e194: nop 
label_0x19e19c:
    return;                                                     // 0x0019e1a0: jr $ra
    sp = sp + 0x10;                                             // 0x0019e1a4: addiu $sp, $sp, 0x10
}