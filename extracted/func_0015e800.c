void func_0015e800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x20;                                            // 0x0015e800: addiu $sp, $sp, -0x20
    v1 = 0x22 << 16;                                            // 0x0015e804: lui $v1, 0x22
    v0 = 0x22 << 16;                                            // 0x0015e808: lui $v0, 0x22
    t0 = v0 + 0x76d8;                                           // 0x0015e810: addiu $t0, $v0, 0x76d8
    a1 = 0x2b80;                                                // 0x0015e824: addiu $a1, $zero, 0x2b80
    local_4 = a0;                                               // 0x0015e828: sw $a0, 4($sp)
    func_001696b0();  // 1696b0                                // 0x0015e82c: jal 0x1696b0
    a0 = &str_00227758;  // "E011081 mwPlySfdInit: Not compatible SFD Version." // 0x0015e830: addiu $a0, $v1, 0x7758
    v1 = 1;                                                     // 0x0015e834: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x15e858;                          // 0x0015e838: beq $v0, $v1, 0x15e858
    a0 = 0x22 << 16;                                            // 0x0015e840: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015e844: jal 0x163410
    a0 = &str_00227760;  // "DATA ERROR(%08X)"                  // 0x0015e848: addiu $a0, $a0, 0x7760
    goto label_0x15e898;                                        // 0x0015e84c: b 0x15e898
    v0 = -1;                                                    // 0x0015e850: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0015e854: nop 
label_0x15e858:
    func_001696c0();  // 1696c0                                // 0x0015e858: jal 0x1696c0
    /* nop */                                                   // 0x0015e85c: nop 
    if (v0 == 0) goto label_0x15e878;                           // 0x0015e860: beqz $v0, 0x15e878
    a1 = 0x16 << 16;                                            // 0x0015e864: lui $a1, 0x16
    func_0015e7b0();  // 15e7b0                                // 0x0015e868: jal 0x15e7b0
    a0 = -0x12d;                                                // 0x0015e86c: addiu $a0, $zero, -0x12d
    goto label_0x15e89c;                                        // 0x0015e870: b 0x15e89c
label_0x15e878:
    a1 = a1 + -0x1738;                                          // 0x0015e87c: addiu $a1, $a1, -0x1738
    func_00169980();  // 169980                                // 0x0015e880: jal 0x169980
    if (v0 == 0) goto label_0x15e898;                           // 0x0015e888: beqz $v0, 0x15e898
    a0 = -0x12f;                                                // 0x0015e88c: addiu $a0, $zero, -0x12f
    func_0015e7b0();  // 15e7b0                                // 0x0015e890: jal 0x15e7b0
    /* nop */                                                   // 0x0015e894: nop 
label_0x15e898:
label_0x15e89c:
    return;                                                     // 0x0015e89c: jr $ra
    sp = sp + 0x20;                                             // 0x0015e8a0: addiu $sp, $sp, 0x20
}