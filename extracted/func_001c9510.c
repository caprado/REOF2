void func_001c9510() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9510: addiu $sp, $sp, -0x10
    func_001c8980();  // 1c8980                                // 0x001c9518: jal 0x1c8980
    /* nop */                                                   // 0x001c951c: nop 
    a0 = -2;                                                    // 0x001c9524: addiu $a0, $zero, -2
    if (v0 == a0) goto label_0x1c9570;                          // 0x001c952c: beq $v0, $a0, 0x1c9570
    v1 = -6;                                                    // 0x001c9530: addiu $v1, $zero, -6
    if (v0 == v1) goto label_0x1c9568;                          // 0x001c9534: beq $v0, $v1, 0x1c9568
    /* nop */                                                   // 0x001c9538: nop 
    a0 = -1;                                                    // 0x001c953c: addiu $a0, $zero, -1
    if (v0 == a0) goto label_0x1c9560;                          // 0x001c9540: beq $v0, $a0, 0x1c9560
    v1 = -0x21;                                                 // 0x001c9544: addiu $v1, $zero, -0x21
    if (v0 == v1) goto label_0x1c9558;                          // 0x001c9548: beq $v0, $v1, 0x1c9558
    /* nop */                                                   // 0x001c954c: nop 
    goto label_0x1c9578;                                        // 0x001c9550: b 0x1c9578
    /* nop */                                                   // 0x001c9554: nop 
label_0x1c9558:
    goto label_0x1c9578;                                        // 0x001c9558: b 0x1c9578
label_0x1c9560:
    goto label_0x1c9578;                                        // 0x001c9560: b 0x1c9578
label_0x1c9568:
    goto label_0x1c9578;                                        // 0x001c9568: b 0x1c9578
label_0x1c9570:
    v0 = -3;                                                    // 0x001c9570: addiu $v0, $zero, -3
    /* nop */                                                   // 0x001c9574: nop 
label_0x1c9578:
    return;                                                     // 0x001c957c: jr $ra
    sp = sp + 0x10;                                             // 0x001c9580: addiu $sp, $sp, 0x10
}