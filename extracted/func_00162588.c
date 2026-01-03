void func_00162588() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162588: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x001625a4: jal 0x15fc80
    if (v0 != 0) goto label_0x1625d0;                           // 0x001625ac: bnez $v0, 0x1625d0
    a0 = 0x23 << 16;                                            // 0x001625b4: lui $a0, 0x23
    a0 = &str_00228bb0;  // "E1122637: mwPlyGetSlFname: handle is invalid." // 0x001625c0: addiu $a0, $a0, -0x7450
    return func_001634a8();  // Tail call                        // 0x001625c8: j 0x163410
    sp = sp + 0x20;                                             // 0x001625cc: addiu $sp, $sp, 0x20
label_0x1625d0:
    func_0013cc38();  // 13cc38                                // 0x001625d0: jal 0x13cc38
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x001625d4: lw $a0, 0x4c($s0)
    func_001624c8();  // 1624c8                                // 0x001625e0: jal 0x1624c8
    func_00162320();  // 162320                                // 0x001625ec: jal 0x162320
    a1 = 1;                                                     // 0x001625f0: addiu $a1, $zero, 1
    return func_00162320();  // Tail call                        // 0x00162608: j 0x162290
    sp = sp + 0x20;                                             // 0x0016260c: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00162610: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x00162624: jal 0x15fc80
    if (v0 != 0) goto label_0x162648;                           // 0x0016262c: bnez $v0, 0x162648
    a0 = 0x23 << 16;                                            // 0x00162634: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00162638: jal 0x163410
    a0 = &str_00228be0;  // "E10821B : Invalid value of stm_no : %d" // 0x0016263c: addiu $a0, $a0, -0x7420
    goto label_0x1626a0;                                        // 0x00162640: b 0x1626a0
label_0x162648:
    func_001624b0();  // 1624b0                                // 0x00162648: jal 0x1624b0
    /* nop */                                                   // 0x0016264c: nop 
    v1 = (s0 < v0) ? 1 : 0;                                     // 0x00162650: slt $v1, $s0, $v0
    if (v1 == 0) goto label_0x1626a0;                           // 0x00162654: beqz $v1, 0x1626a0
    if (s0 >= 0) goto label_0x162678;                           // 0x0016265c: bgez $s0, 0x162678
    a0 = 0x23 << 16;                                            // 0x00162664: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00162668: jal 0x163410
    a0 = &str_00228c10;  // "E1122642: mwPlyLinkStm: handle is invalid." // 0x0016266c: addiu $a0, $a0, -0x73f0
    goto label_0x1626a0;                                        // 0x00162670: b 0x1626a0
label_0x162678:
    func_001626d0();  // 1626d0                                // 0x00162678: jal 0x1626d0
    return func_00162700();  // Tail call                        // 0x00162694: j 0x1626e8
    sp = sp + 0x20;                                             // 0x00162698: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016269c: nop 
label_0x1626a0:
    return;                                                     // 0x001626ac: jr $ra
    sp = sp + 0x20;                                             // 0x001626b0: addiu $sp, $sp, 0x20
}