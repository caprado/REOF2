void func_00171cd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171cd8: addiu $sp, $sp, -0x10
    func_001711f0();  // 1711f0                                // 0x00171ce4: jal 0x1711f0
    if (v0 != 0) goto label_0x171d00;                           // 0x00171cec: bnez $v0, 0x171d00
    a1 = 1;                                                     // 0x00171cf0: addiu $a1, $zero, 1
    goto label_0x171d20;                                        // 0x00171cf4: b 0x171d20
    v0 = 1;                                                     // 0x00171cf8: addiu $v0, $zero, 1
    /* nop */                                                   // 0x00171cfc: nop 
label_0x171d00:
    a0 = *(int32_t*)((s0) + 0x1b30);                            // 0x00171d00: lw $a0, 0x1b30($s0)
    a0 = a0 + 0x9d8;                                            // 0x00171d04: addiu $a0, $a0, 0x9d8
    v1 = *(int32_t*)((a0) + 0x20);                              // 0x00171d08: lw $v1, 0x20($a0)
    if (v1 == a1) goto label_0x171d20;                          // 0x00171d0c: beq $v1, $a1, 0x171d20
    v0 = 1;                                                     // 0x00171d10: addiu $v0, $zero, 1
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x00171d14: lw $v0, 0xc($a0)
    v0 = (v0 < 3) ? 1 : 0;                                      // 0x00171d18: slti $v0, $v0, 3
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00171d1c: sltiu $v0, $v0, 1
label_0x171d20:
    return;                                                     // 0x00171d28: jr $ra
    sp = sp + 0x10;                                             // 0x00171d2c: addiu $sp, $sp, 0x10
}