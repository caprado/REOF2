void func_0013c060() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x150;                                           // 0x0013c060: addiu $sp, $sp, -0x150
    a2 = 0x100;                                                 // 0x0013c064: addiu $a2, $zero, 0x100
    func_00107d30();  // 0x107c70                                // 0x0013c0a8: jal 0x107c70
    v1 = (s4 < 0xe) ? 1 : 0;                                    // 0x0013c0b0: slti $v1, $s4, 0xe
    v0 = 0xd;                                                   // 0x0013c0b4: addiu $v0, $zero, 0xd
    if (v1 == 0) s4 = v0;                                       // 0x0013c0b8: movz $s4, $v0, $v1
    if (s4 <= 0) goto label_0x13c1d8;                           // 0x0013c0bc: blez $s4, 0x13c1d8
    v1 = 0x20 << 16;                                            // 0x0013c0c0: lui $v1, 0x20
    v0 = 0x20 << 16;                                            // 0x0013c0c4: lui $v0, 0x20
    s7 = v0 + 0x4490;                                           // 0x0013c0cc: addiu $s7, $v0, 0x4490
label_0x13c0d0:
    v1 = g_0020449c;  // Global at 0x0020449c                   // 0x0013c0d0: lw $v1, 0xc($s7)
    v0 = g_00204498;  // Global at 0x00204498                   // 0x0013c0d8: lw $v0, 8($s7)
    v0 = v0 << 3;                                               // 0x0013c0e0: sll $v0, $v0, 3
    v1 = a0 + s3;                                               // 0x0013c0e4: addu $v1, $a0, $s3
    s3 = s3 + 1;                                                // 0x0013c0e8: addiu $s3, $s3, 1
    v0 = v0 + v1;                                               // 0x0013c0ec: addu $v0, $v0, $v1
    s1 = s5 + v0;                                               // 0x0013c0f0: addu $s1, $s5, $v0
    func_0013bc58();  // 0x13bb40                                // 0x0013c0f4: jal 0x13bb40
    v0 = *(int8_t*)(s1);                                        // 0x0013c0fc: lb $v0, 0($s1)
    if (v0 == 0) goto label_0x13c1c8;                           // 0x0013c100: beqz $v0, 0x13c1c8
    a0 = 0x6600;                                                // 0x0013c104: addiu $a0, $zero, 0x6600
    func_00137fb0();  // 0x137ec8                                // 0x0013c108: jal 0x137ec8
    /* nop */                                                   // 0x0013c10c: nop 
    a1 = 1;                                                     // 0x0013c110: addiu $a1, $zero, 1
    func_00138240();  // 0x1381d8                                // 0x0013c114: jal 0x1381d8
    a0 = 0x6601;                                                // 0x0013c11c: addiu $a0, $zero, 0x6601
    func_00137fb0();  // 0x137ec8                                // 0x0013c120: jal 0x137ec8
    if (s0 >= 0) goto label_0x13c158;                           // 0x0013c128: bgez $s0, 0x13c158
    v1 = 0x20 << 16;                                            // 0x0013c130: lui $v1, 0x20
    v0 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c134: lw $v0, 0x44a4($v1)
    /* bnezl $v0, 0x13c1c8 */                                   // 0x0013c138: bnezl $v0, 0x13c1c8
    fp = fp + 1;                                                // 0x0013c13c: addiu $fp, $fp, 1
    v0 = 0x22 << 16;                                            // 0x0013c140: lui $v0, 0x22
    func_00116598();  // 0x116508                                // 0x0013c148: jal 0x116508
    a0 = &str_002259d8;  // "HTCI: \\"                          // 0x0013c14c: addiu $a0, $v0, 0x59d8
    goto label_0x13c1c8;                                        // 0x0013c150: b 0x13c1c8
    fp = fp + 1;                                                // 0x0013c154: addiu $fp, $fp, 1
label_0x13c158:
    *(uint32_t*)(s2) = s0;                                      // 0x0013c158: sw $s0, 0($s2)
    func_0013b270();  // 0x13b1e8                                // 0x0013c15c: jal 0x13b1e8
    s6 = s6 + 1;                                                // 0x0013c160: addiu $s6, $s6, 1
    v1 = 0x22 << 16;                                            // 0x0013c164: lui $v1, 0x22
    a0 = &str_00225a00;  // "HTCI: Total %d files.\n"           // 0x0013c170: addiu $a0, $v1, 0x5a00
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0013c174: sw $v0, 4($s2)
    v1 = 0x20 << 16;                                            // 0x0013c178: lui $v1, 0x20
    v0 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c17c: lw $v0, 0x44a4($v1)
    if (v0 != 0) goto label_0x13c190;                           // 0x0013c180: bnez $v0, 0x13c190
    func_00116598();  // 0x116508                                // 0x0013c188: jal 0x116508
    /* nop */                                                   // 0x0013c18c: nop 
label_0x13c190:
    func_00137fb0();  // 0x137ec8                                // 0x0013c190: jal 0x137ec8
    a0 = 0x6800;                                                // 0x0013c194: addiu $a0, $zero, 0x6800
    func_00138298();  // 0x138240                                // 0x0013c198: jal 0x138240
    func_00137fb0();  // 0x137ec8                                // 0x0013c1a0: jal 0x137ec8
    a0 = 0x6801;                                                // 0x0013c1a4: addiu $a0, $zero, 0x6801
    func_00137fb0();  // 0x137ec8                                // 0x0013c1a8: jal 0x137ec8
    a0 = 0x6700;                                                // 0x0013c1ac: addiu $a0, $zero, 0x6700
    v0 = 0x20 << 16;                                            // 0x0013c1b0: lui $v0, 0x20
    a1 = g_002044a0;  // Global at 0x002044a0                   // 0x0013c1b4: lw $a1, 0x44a0($v0)
    func_00138240();  // 0x1381d8                                // 0x0013c1b8: jal 0x1381d8
    func_00137fb0();  // 0x137ec8                                // 0x0013c1c0: jal 0x137ec8
    a0 = 0x6701;                                                // 0x0013c1c4: addiu $a0, $zero, 0x6701
label_0x13c1c8:
    v0 = (s3 < s4) ? 1 : 0;                                     // 0x0013c1c8: slt $v0, $s3, $s4
    if (v0 != 0) goto label_0x13c0d0;                           // 0x0013c1cc: bnez $v0, 0x13c0d0
    s2 = s2 + 8;                                                // 0x0013c1d0: addiu $s2, $s2, 8
    v1 = 0x20 << 16;                                            // 0x0013c1d4: lui $v1, 0x20
label_0x13c1d8:
    s0 = v1 + 0x44a4;                                           // 0x0013c1d8: addiu $s0, $v1, 0x44a4
    v0 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c1dc: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x13c1f4;                           // 0x0013c1e0: bnez $v0, 0x13c1f4
    a0 = 0x22 << 16;                                            // 0x0013c1e8: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013c1ec: jal 0x116508
    a0 = &str_00225a20;  // "HTCI: Error, Can't load all cache file.%c" // 0x0013c1f0: addiu $a0, $a0, 0x5a20
label_0x13c1f4:
    if (fp <= 0) goto label_0x13c21c;                           // 0x0013c1f4: blez $fp, 0x13c21c
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c1fc: lw $v1, 0($s0)
    v0 = 2;                                                     // 0x0013c200: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x13c218;                          // 0x0013c204: beq $v1, $v0, 0x13c218
    a1 = 0xa;                                                   // 0x0013c208: addiu $a1, $zero, 0xa
    a0 = 0x22 << 16;                                            // 0x0013c20c: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013c210: jal 0x116508
    a0 = &str_00225a38;  // "HTCI: \\"                          // 0x0013c214: addiu $a0, $a0, 0x5a38
label_0x13c218:
label_0x13c21c:
    return;                                                     // 0x0013c244: jr $ra
    sp = sp + 0x150;                                            // 0x0013c248: addiu $sp, $sp, 0x150
}