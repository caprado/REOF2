void func_001cf190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cf190: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((gp) + -0x62cc);                           // 0x001cf198: lw $v0, -0x62cc($gp)
    if (v0 == 0) goto label_0x1cf1ac;                           // 0x001cf19c: beqz $v0, 0x1cf1ac
    a0 = 0x24 << 16;                                            // 0x001cf1a0: lui $a0, 0x24
    goto label_0x1cf40c;                                        // 0x001cf1a4: b 0x1cf40c
    v0 = 1;                                                     // 0x001cf1a8: addiu $v0, $zero, 1
label_0x1cf1ac:
    func_0011c140();  // 0x11c0a0                                // 0x001cf1ac: jal 0x11c0a0
    a0 = &str_00243a70;  // "thpri=9"                           // 0x001cf1b0: addiu $a0, $a0, 0x3a70
    at = (v0 < 0) ? 1 : 0;                                      // 0x001cf1b4: slt $at, $v0, $zero
    if (at != 0) goto label_0x1cf1c8;                           // 0x001cf1b8: bnez $at, 0x1cf1c8
    func_001cea30();  // 0x1ce990                                // 0x001cf1c0: jal 0x1ce990
    /* nop */                                                   // 0x001cf1c4: nop 
label_0x1cf1c8:
    a2 = *(int32_t*)((gp) + -0x6260);                           // 0x001cf1c8: lw $a2, -0x6260($gp)
    v0 = 3;                                                     // 0x001cf1cc: addiu $v0, $zero, 3
    v1 = g_00243aa8;  // Global at 0x00243aa8                   // 0x001cf1d0: lw $v1, 0($a2)
    if (v1 == v0) goto label_0x1cf2ec;                          // 0x001cf1d4: beq $v1, $v0, 0x1cf2ec
    a1 = 1;                                                     // 0x001cf1d8: addiu $a1, $zero, 1
    if (v1 == a1) goto label_0x1cf294;                          // 0x001cf1dc: beq $v1, $a1, 0x1cf294
    a0 = 2;                                                     // 0x001cf1e0: addiu $a0, $zero, 2
    if (v1 == a0) goto label_0x1cf1f4;                          // 0x001cf1e4: beq $v1, $a0, 0x1cf1f4
    /* nop */                                                   // 0x001cf1e8: nop 
    goto label_0x1cf40c;                                        // 0x001cf1ec: b 0x1cf40c
    v0 = 1;                                                     // 0x001cf1f0: addiu $v0, $zero, 1
label_0x1cf1f4:
    v1 = g_00243aac;  // Global at 0x00243aac                   // 0x001cf1f4: lw $v1, 4($a2)
    v0 = 4;                                                     // 0x001cf1f8: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1cf234;                          // 0x001cf1fc: beq $v1, $v0, 0x1cf234
    /* nop */                                                   // 0x001cf200: nop 
    if (v1 == a0) goto label_0x1cf214;                          // 0x001cf204: beq $v1, $a0, 0x1cf214
    /* nop */                                                   // 0x001cf208: nop 
    goto label_0x1cf250;                                        // 0x001cf20c: b 0x1cf250
    a0 = *(int32_t*)((gp) + -0x6570);                           // 0x001cf210: lw $a0, -0x6570($gp)
label_0x1cf214:
    a0 = *(int32_t*)((gp) + -0x657c);                           // 0x001cf214: lw $a0, -0x657c($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf224: jal 0x1cebd0
    goto label_0x1cf24c;                                        // 0x001cf22c: b 0x1cf24c
    /* nop */                                                   // 0x001cf230: nop 
label_0x1cf234:
    a0 = *(int32_t*)((gp) + -0x6578);                           // 0x001cf234: lw $a0, -0x6578($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf244: jal 0x1cebd0
label_0x1cf24c:
    a0 = *(int32_t*)((gp) + -0x6570);                           // 0x001cf24c: lw $a0, -0x6570($gp)
label_0x1cf250:
    a2 = 0x24 << 16;                                            // 0x001cf250: lui $a2, 0x24
    a1 = 1;                                                     // 0x001cf254: addiu $a1, $zero, 1
    a2 = a2 + 0x3aa8;                                           // 0x001cf258: addiu $a2, $a2, 0x3aa8
    func_001ced80();  // 0x1cebd0                                // 0x001cf260: jal 0x1cebd0
    a0 = *(int32_t*)((gp) + -0x656c);                           // 0x001cf268: lw $a0, -0x656c($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf278: jal 0x1cebd0
    func_001cf610();  // 0x1cf5f0                                // 0x001cf280: jal 0x1cf5f0
    /* nop */                                                   // 0x001cf284: nop 
    v0 = 2;                                                     // 0x001cf288: addiu $v0, $zero, 2
    goto label_0x1cf408;                                        // 0x001cf28c: b 0x1cf408
    *(uint8_t*)((gp) + -0x626c) = v0;                           // 0x001cf290: sb $v0, -0x626c($gp)
label_0x1cf294:
    a0 = *(int32_t*)((gp) + -0x6558);                           // 0x001cf294: lw $a0, -0x6558($gp)
    a2 = 0x24 << 16;                                            // 0x001cf298: lui $a2, 0x24
    a2 = a2 + 0x3aa8;                                           // 0x001cf29c: addiu $a2, $a2, 0x3aa8
    func_001ced80();  // 0x1cebd0                                // 0x001cf2a4: jal 0x1cebd0
    a0 = *(int32_t*)((gp) + -0x655c);                           // 0x001cf2ac: lw $a0, -0x655c($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf2bc: jal 0x1cebd0
    a0 = *(int32_t*)((gp) + -0x6570);                           // 0x001cf2c4: lw $a0, -0x6570($gp)
    a2 = 0x24 << 16;                                            // 0x001cf2c8: lui $a2, 0x24
    a1 = 1;                                                     // 0x001cf2cc: addiu $a1, $zero, 1
    a2 = a2 + 0x3aa8;                                           // 0x001cf2d0: addiu $a2, $a2, 0x3aa8
    func_001ced80();  // 0x1cebd0                                // 0x001cf2d8: jal 0x1cebd0
    v0 = 1;                                                     // 0x001cf2e0: addiu $v0, $zero, 1
    goto label_0x1cf408;                                        // 0x001cf2e4: b 0x1cf408
    *(uint8_t*)((gp) + -0x626c) = v0;                           // 0x001cf2e8: sb $v0, -0x626c($gp)
label_0x1cf2ec:
    v1 = g_00243aac;  // Global at 0x00243aac                   // 0x001cf2ec: lw $v1, 4($a2)
    v0 = 4;                                                     // 0x001cf2f0: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1cf304;                          // 0x001cf2f4: beq $v1, $v0, 0x1cf304
    /* nop */                                                   // 0x001cf2f8: nop 
    goto label_0x1cf324;                                        // 0x001cf2fc: b 0x1cf324
    a0 = *(int32_t*)((gp) + -0x6558);                           // 0x001cf300: lw $a0, -0x6558($gp)
label_0x1cf304:
    a0 = *(int32_t*)((gp) + -0x6578);                           // 0x001cf304: lw $a0, -0x6578($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf314: jal 0x1cebd0
    goto label_0x1cf3c8;                                        // 0x001cf31c: b 0x1cf3c8
    a0 = *(int32_t*)((gp) + -0x6570);                           // 0x001cf320: lw $a0, -0x6570($gp)
label_0x1cf324:
    a2 = 0x24 << 16;                                            // 0x001cf324: lui $a2, 0x24
    a1 = 1;                                                     // 0x001cf328: addiu $a1, $zero, 1
    a2 = a2 + 0x3aa8;                                           // 0x001cf32c: addiu $a2, $a2, 0x3aa8
    func_001ced80();  // 0x1cebd0                                // 0x001cf334: jal 0x1cebd0
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001cf33c: lw $v1, -0x6260($gp)
    v0 = 9;                                                     // 0x001cf340: addiu $v0, $zero, 9
    v1 = *(int32_t*)((v1) + 4);                                 // 0x001cf344: lw $v1, 4($v1)
    if (v1 == v0) goto label_0x1cf3ac;                          // 0x001cf348: beq $v1, $v0, 0x1cf3ac
    v0 = 8;                                                     // 0x001cf34c: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x1cf38c;                          // 0x001cf350: beq $v1, $v0, 0x1cf38c
    /* nop */                                                   // 0x001cf354: nop 
    v0 = 7;                                                     // 0x001cf358: addiu $v0, $zero, 7
    if (v1 == v0) goto label_0x1cf36c;                          // 0x001cf35c: beq $v1, $v0, 0x1cf36c
    /* nop */                                                   // 0x001cf360: nop 
    goto label_0x1cf3c4;                                        // 0x001cf364: b 0x1cf3c4
    /* nop */                                                   // 0x001cf368: nop 
label_0x1cf36c:
    a0 = *(int32_t*)((gp) + -0x654c);                           // 0x001cf36c: lw $a0, -0x654c($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf37c: jal 0x1cebd0
    goto label_0x1cf3c4;                                        // 0x001cf384: b 0x1cf3c4
    /* nop */                                                   // 0x001cf388: nop 
label_0x1cf38c:
    a0 = *(int32_t*)((gp) + -0x6548);                           // 0x001cf38c: lw $a0, -0x6548($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf39c: jal 0x1cebd0
    goto label_0x1cf3c4;                                        // 0x001cf3a4: b 0x1cf3c4
    /* nop */                                                   // 0x001cf3a8: nop 
label_0x1cf3ac:
    a0 = *(int32_t*)((gp) + -0x6544);                           // 0x001cf3ac: lw $a0, -0x6544($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf3bc: jal 0x1cebd0
label_0x1cf3c4:
    a0 = *(int32_t*)((gp) + -0x6570);                           // 0x001cf3c4: lw $a0, -0x6570($gp)
label_0x1cf3c8:
    a2 = 0x24 << 16;                                            // 0x001cf3c8: lui $a2, 0x24
    a1 = 1;                                                     // 0x001cf3cc: addiu $a1, $zero, 1
    a2 = a2 + 0x3aa8;                                           // 0x001cf3d0: addiu $a2, $a2, 0x3aa8
    func_001ced80();  // 0x1cebd0                                // 0x001cf3d8: jal 0x1cebd0
    a0 = *(int32_t*)((gp) + -0x656c);                           // 0x001cf3e0: lw $a0, -0x656c($gp)
    func_001ced80();  // 0x1cebd0                                // 0x001cf3f0: jal 0x1cebd0
    func_001cf610();  // 0x1cf5f0                                // 0x001cf3f8: jal 0x1cf5f0
    /* nop */                                                   // 0x001cf3fc: nop 
    v0 = 2;                                                     // 0x001cf400: addiu $v0, $zero, 2
    *(uint8_t*)((gp) + -0x626c) = v0;                           // 0x001cf404: sb $v0, -0x626c($gp)
label_0x1cf408:
    v0 = 1;                                                     // 0x001cf408: addiu $v0, $zero, 1
label_0x1cf40c:
    return;                                                     // 0x001cf410: jr $ra
    sp = sp + 0x10;                                             // 0x001cf414: addiu $sp, $sp, 0x10
}