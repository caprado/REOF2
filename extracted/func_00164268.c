void func_00164268() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00164268: addiu $sp, $sp, -0x10
    return func_00130ca0();  // Tail call                       // 0x00164274: j 0x130ca0
    sp = sp + 0x10;                                             // 0x00164278: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016427c: nop 
    sp = sp + -0x10;                                            // 0x00164280: addiu $sp, $sp, -0x10
    return func_001300e0();  // Tail call                        // 0x00164290: j 0x130098
    sp = sp + 0x10;                                             // 0x00164294: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00164298: addiu $sp, $sp, -0x10
    return func_00130138();  // Tail call                        // 0x001642a4: j 0x1300e0
    sp = sp + 0x10;                                             // 0x001642a8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001642ac: nop 
    sp = sp + -0x20;                                            // 0x001642b0: addiu $sp, $sp, -0x20
    func_001301e0();  // 1301e0                                // 0x001642c4: jal 0x1301e0
    t0 = 0xf << 16;                                             // 0x001642cc: lui $t0, 0xf
    func_00130138();  // 130138                                // 0x001642e0: jal 0x130138
    t0 = t0 | 0xffff;                                           // 0x001642e4: ori $t0, $t0, 0xffff
    a1 = 0xf << 16;                                             // 0x001642ec: lui $a1, 0xf
    a1 = a1 | 0xffff;                                           // 0x001642f8: ori $a1, $a1, 0xffff
    return func_001304a8();  // Tail call                        // 0x00164300: j 0x130468
    sp = sp + 0x20;                                             // 0x00164304: addiu $sp, $sp, 0x20
    sp = sp + -0x30;                                            // 0x00164308: addiu $sp, $sp, -0x30
    func_001301e0();  // 1301e0                                // 0x00164334: jal 0x1301e0
    func_00130138();  // 130138                                // 0x0016434c: jal 0x130138
    return func_001304a8();  // Tail call                        // 0x00164374: j 0x130468
    sp = sp + 0x30;                                             // 0x00164378: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0016437c: nop 
    sp = sp + -0x10;                                            // 0x00164380: addiu $sp, $sp, -0x10
    return func_00130358();  // Tail call                        // 0x0016438c: j 0x130318
    sp = sp + 0x10;                                             // 0x00164390: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00164394: nop 
    sp = sp + -0x10;                                            // 0x00164398: addiu $sp, $sp, -0x10
    func_001303a0();  // 1303a0                                // 0x001643a4: jal 0x1303a0
    return func_00130220();  // Tail call                        // 0x001643b8: j 0x1301e0
    sp = sp + 0x10;                                             // 0x001643bc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001643c0: addiu $sp, $sp, -0x10
    func_00130408();  // 130408                                // 0x001643cc: jal 0x130408
    return func_00130278();  // Tail call                        // 0x001643e0: j 0x130220
    sp = sp + 0x10;                                             // 0x001643e4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001643e8: addiu $sp, $sp, -0x10
    return func_00130280();  // Tail call                        // 0x001643f4: j 0x130278
    sp = sp + 0x10;                                             // 0x001643f8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001643fc: nop 
    v0 = 0x120;                                                 // 0x00164400: addiu $v0, $zero, 0x120
    sp = sp + -0x10;                                            // 0x00164404: addiu $sp, $sp, -0x10
    a1 = (a1 < 0x120) ? 1 : 0;                                  // 0x00164408: slti $a1, $a1, 0x120
    *(uint32_t*)(a2) = v0;                                      // 0x00164410: sw $v0, 0($a2)
    if (a1 != 0) goto label_0x164454;                           // 0x00164418: bnez $a1, 0x164454
    a0 = *(uint8_t*)(a2);                                       // 0x00164420: lbu $a0, 0($a2)
    v1 = 0x80;                                                  // 0x00164424: addiu $v1, $zero, 0x80
    if (a0 != v1) goto label_0x164458;                          // 0x00164428: bnel $a0, $v1, 0x164458
    v1 = *(uint8_t*)((a2) + 1);                                 // 0x00164430: lbu $v1, 1($a2)
    /* bnezl $v1, 0x164458 */                                   // 0x00164434: bnezl $v1, 0x164458
    a1 = 0x23 << 16;                                            // 0x0016443c: lui $a1, 0x23
    a0 = a2 + 0x11a;                                            // 0x00164440: addiu $a0, $a2, 0x11a
    a1 = &str_00228e78;  // "\nCRI SFD/PS2EE Ver.1.862 Build:Jul 29 2003 15:13:35\n" // 0x00164444: addiu $a1, $a1, -0x7188
    func_0010b0e8();  // 10b0e8                                // 0x00164448: jal 0x10b0e8
    a2 = 6;                                                     // 0x0016444c: addiu $a2, $zero, 6
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00164450: sltiu $v0, $v0, 1
label_0x164454:
label_0x164458:
    return;                                                     // 0x00164458: jr $ra
    sp = sp + 0x10;                                             // 0x0016445c: addiu $sp, $sp, 0x10
}