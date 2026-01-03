void func_00161238() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x161238:
    sp = sp + -0x10;                                            // 0x00161238: addiu $sp, $sp, -0x10
    a0 = str_00228700;  // "CRITAGS"                            // 0x00161240: lw $a0, 0xa8($a0)
    return func_0017d120();  // Tail call                       // 0x00161248: j 0x17d120
    sp = sp + 0x10;                                             // 0x0016124c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161250: addiu $sp, $sp, -0x10
    goto label_0x161238;                                        // 0x0016125c: j 0x161238
    sp = sp + 0x10;                                             // 0x00161260: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161264: nop 
    sp = sp + -0x10;                                            // 0x00161268: addiu $sp, $sp, -0x10
    a0 = str_00228700;  // "CRITAGS"                            // 0x00161270: lw $a0, 0xa8($a0)
    return func_0017d200();  // Tail call                        // 0x00161278: j 0x17d128
    sp = sp + 0x10;                                             // 0x0016127c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161280: addiu $sp, $sp, -0x10
    goto label_0x161348;                                        // 0x00161290: j 0x161348
    sp = sp + 0x10;                                             // 0x00161294: addiu $sp, $sp, 0x10
label_0x161298:
    sp = sp + -0x20;                                            // 0x00161298: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x001612b4: jal 0x15fc80
    if (v0 != 0) goto label_0x1612e8;                           // 0x001612bc: bnez $v0, 0x1612e8
    a0 = 0x23 << 16;                                            // 0x001612c4: lui $a0, 0x23
    a0 = &str_002285a8;  // "E306091: MWSFSFX_SetOutBufSize: handle is invalid." // 0x001612d0: addiu $a0, $a0, -0x7a58
    return func_001634a8();  // Tail call                        // 0x001612dc: j 0x163410
    sp = sp + 0x20;                                             // 0x001612e0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001612e4: nop 
label_0x1612e8:
    func_00160850();  // 160850                                // 0x001612e8: jal 0x160850
    /* nop */                                                   // 0x001612ec: nop 
    return func_0017cf28();  // Tail call                       // 0x0016130c: j 0x17cf28
    sp = sp + 0x20;                                             // 0x00161310: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00161314: nop 
    sp = sp + -0x10;                                            // 0x00161318: addiu $sp, $sp, -0x10
    goto label_0x161348;                                        // 0x00161328: j 0x161348
    sp = sp + 0x10;                                             // 0x0016132c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161330: addiu $sp, $sp, -0x10
    goto label_0x161298;                                        // 0x0016133c: j 0x161298
    sp = sp + 0x10;                                             // 0x00161340: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161344: nop 
label_0x161348:
    sp = sp + -0x30;                                            // 0x00161348: addiu $sp, $sp, -0x30
    func_0015fc80();  // 15fc80                                // 0x0016136c: jal 0x15fc80
    if (v0 != 0) goto label_0x1613a0;                           // 0x00161374: bnez $v0, 0x1613a0
    a0 = 0x23 << 16;                                            // 0x0016137c: lui $a0, 0x23
    a0 = &str_002285e8;  // "E2011918: mwPlyFxSetOutZscale: handle is invalid." // 0x00161388: addiu $a0, $a0, -0x7a18
    return func_001634a8();  // Tail call                        // 0x00161398: j 0x163410
    sp = sp + 0x30;                                             // 0x0016139c: addiu $sp, $sp, 0x30
label_0x1613a0:
    func_00160850();  // 160850                                // 0x001613a0: jal 0x160850
    /* nop */                                                   // 0x001613a4: nop 
    func_0017cf18();  // 17cf18                                // 0x001613b4: jal 0x17cf18
    return func_0017cf40();  // Tail call                       // 0x001613d8: j 0x17cf40
    sp = sp + 0x30;                                             // 0x001613dc: addiu $sp, $sp, 0x30
    sp = sp + -0x20;                                            // 0x001613e0: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x001613f4: jal 0x15fc80
    if (v0 != 0) goto label_0x161420;                           // 0x001613fc: bnez $v0, 0x161420
    a0 = 0x23 << 16;                                            // 0x00161404: lui $a0, 0x23
    a0 = &str_00228620;  // "E2011919: mwPlyFxGetOutZscale: handle is invalid." // 0x00161410: addiu $a0, $a0, -0x79e0
    return func_001634a8();  // Tail call                        // 0x00161418: j 0x163410
    sp = sp + 0x20;                                             // 0x0016141c: addiu $sp, $sp, 0x20
label_0x161420:
    func_00160850();  // 160850                                // 0x00161420: jal 0x160850
    /* nop */                                                   // 0x00161424: nop 
    return func_0017d080();  // Tail call                       // 0x0016143c: j 0x17d080
    sp = sp + 0x20;                                             // 0x00161440: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00161444: nop 
    sp = sp + -0x10;                                            // 0x00161448: addiu $sp, $sp, -0x10
    func_0015fc80();  // 15fc80                                // 0x00161454: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x161488                 // 0x0016145c: bnez $v0, 0x161488
    a0 = 0x23 << 16;                                            // 0x00161464: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00161468: jal 0x163410
    a0 = &str_00228658;  // "E2011920: mwPlyFxSetOutZoffset: handle is invalid." // 0x0016146c: addiu $a0, $a0, -0x79a8
    return;                                                     // 0x0016147c: jr $ra
    sp = sp + 0x10;                                             // 0x00161480: addiu $sp, $sp, 0x10
}