void func_00145208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xc0;                                            // 0x00145208: addiu $sp, $sp, -0xc0
    v0 = 0x1000 << 16;                                          // 0x0014520c: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x00145214: ori $v0, $v0, 0x2010
    v1 = 0x8000 << 16;                                          // 0x0014521c: lui $v1, 0x8000
    v1 = v1 | 0x4000;                                           // 0x00145224: ori $v1, $v1, 0x4000
    a2 = g_10000000;  // Global at 0x10000000                   // 0x00145250: lw $a2, 0($v0)
    v0 = 0x8000 << 16;                                          // 0x00145254: lui $v0, 0x8000
    a2 = a2 & v1;                                               // 0x00145258: and $a2, $a2, $v1
    if (a2 != v0) goto label_0x1452d0;                          // 0x0014525c: bne $a2, $v0, 0x1452d0
    s1 = a1 << 0x1a;                                            // 0x00145260: sll $s1, $a1, 0x1a
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00145264: lw $v0, 0x10a0($s0)
    if (v0 != 0) goto label_0x1452d4;                           // 0x00145268: bnez $v0, 0x1452d4
    s2 = 0x21 << 16;                                            // 0x0014526c: lui $s2, 0x21
    s1 = a1 << 0x1a;                                            // 0x00145270: sll $s1, $a1, 0x1a
label_0x145278:
    v0 = (v0 < 0x1389) ? 1 : 0;                                 // 0x00145278: slti $v0, $v0, 0x1389
    if (v0 != 0) goto label_0x145298;                           // 0x0014527c: bnez $v0, 0x145298
    a3 = a3 + 1;                                                // 0x00145280: addiu $a3, $a3, 1
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x00145284: lw $a0, 0x870($s0)
    func_00147d70();  // 0x147ca0                                // 0x00145288: jal 0x147ca0
    /* FPU: addu.qb $zero, $sp, $t0 */                          // 0x0014528c: addu.qb $zero, $sp, $t0
    /* FPU: aver_u.h $w0, $w0, $w8 */                           // 0x00145290: aver_u.h $w0, $w0, $w8
label_0x145298:
    v1 = 0x1000 << 16;                                          // 0x00145298: lui $v1, 0x1000
    a0 = 0x8000 << 16;                                          // 0x0014529c: lui $a0, 0x8000
    v1 = v1 | 0x2010;                                           // 0x001452a0: ori $v1, $v1, 0x2010
    a0 = a0 | 0x4000;                                           // 0x001452a4: ori $a0, $a0, 0x4000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001452a8: lw $v0, 0($v1)
    a1 = 0x8000 << 16;                                          // 0x001452ac: lui $a1, 0x8000
    v0 = v0 & a0;                                               // 0x001452b0: and $v0, $v0, $a0
    if (v0 != a1) goto label_0x1452d8;                          // 0x001452b4: bne $v0, $a1, 0x1452d8
    v1 = 0x3000 << 16;                                          // 0x001452b8: lui $v1, 0x3000
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001452bc: lw $v0, 0x10a0($s0)
    if (v0 == 0) goto label_0x145278;                           // 0x001452c0: beqz $v0, 0x145278
    goto label_0x1452dc;                                        // 0x001452c8: b 0x1452dc
    a0 = 0x1000 << 16;                                          // 0x001452cc: lui $a0, 0x1000
label_0x1452d0:
    s2 = 0x21 << 16;                                            // 0x001452d0: lui $s2, 0x21
label_0x1452d4:
    v1 = 0x3000 << 16;                                          // 0x001452d4: lui $v1, 0x3000
label_0x1452d8:
    a0 = 0x1000 << 16;                                          // 0x001452d8: lui $a0, 0x1000
label_0x1452dc:
    v1 = s1 | v1;                                               // 0x001452dc: or $v1, $s1, $v1
    a0 = a0 | 0x2000;                                           // 0x001452e0: ori $a0, $a0, 0x2000
    v0 = v1 >> 0x1c;                                            // 0x001452e4: sra $v0, $v1, 0x1c
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001452e8: sw $v1, 0($a0)
    a1 = s2 + 0xcf8;                                            // 0x001452ec: addiu $a1, $s2, 0xcf8
    v0 = v0 << 2;                                               // 0x001452f0: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x001452f4: addu $v0, $v0, $a1
    v1 = g_80000000;  // Global at 0x80000000                   // 0x001452fc: lw $v1, 0($v0)
    if (a2 >= 0) goto label_0x1453ec;                           // 0x00145300: bgez $a2, 0x1453ec
    *(uint32_t*)((s0) + 0x830) = v1;                            // 0x00145304: sw $v1, 0x830($s0)
    v0 = 0x1000 << 16;                                          // 0x00145308: lui $v0, 0x1000
    s3 = 0x1000 << 16;                                          // 0x0014530c: lui $s3, 0x1000
    local_0 = v0;                                               // 0x00145310: sw $v0, 0($sp)
    s2 = 0x1000 << 16;                                          // 0x00145314: lui $s2, 0x1000
    v0 = v0 | 0x2010;                                           // 0x00145318: ori $v0, $v0, 0x2010
    s4 = 0x1000 << 16;                                          // 0x0014531c: lui $s4, 0x1000
    s5 = 0x1000 << 16;                                          // 0x00145320: lui $s5, 0x1000
    s6 = 0xfffe << 16;                                          // 0x00145324: lui $s6, 0xfffe
    s7 = 0x1000 << 16;                                          // 0x00145328: lui $s7, 0x1000
    fp = 0x1000 << 16;                                          // 0x0014532c: lui $fp, 0x1000
    s1 = 0x1000 << 16;                                          // 0x00145330: lui $s1, 0x1000
    local_0 = v0;                                               // 0x00145334: sw $v0, 0($sp)
    s3 = s3 | 0xf590;                                           // 0x00145338: ori $s3, $s3, 0xf590
    s2 = s2 | 0xf520;                                           // 0x0014533c: ori $s2, $s2, 0xf520
    s4 = s4 | 0xb400;                                           // 0x00145340: ori $s4, $s4, 0xb400
    s5 = s5 | 0xb000;                                           // 0x00145344: ori $s5, $s5, 0xb000
    s6 = s6 | 0xffff;                                           // 0x00145348: ori $s6, $s6, 0xffff
    s7 = s7 | 0xb020;                                           // 0x0014534c: ori $s7, $s7, 0xb020
    fp = fp | 0xb420;                                           // 0x00145350: ori $fp, $fp, 0xb420
    s1 = s1 | 0x2000;                                           // 0x00145354: ori $s1, $s1, 0x2000
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00145358: lw $v0, 0x10a0($s0)
    /* nop */                                                   // 0x0014535c: nop 
label_0x145360:
    if (v0 == 0) goto label_0x1453c0;                           // 0x00145360: beqz $v0, 0x1453c0
    func_0011d378();  // 0x11d320                                // 0x00145368: jal 0x11d320
    /* nop */                                                   // 0x0014536c: nop 
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00145370: lw $v1, 0($s2)
    a0 = 1 << 16;                                               // 0x00145374: lui $a0, 1
    v1 = v1 | a0;                                               // 0x00145378: or $v1, $v1, $a0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0014537c: sw $v1, 0($s3)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00145380: sw $zero, 0($s4)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00145384: sw $zero, 0($s5)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00145388: lw $v1, 0($s2)
    v1 = v1 & s6;                                               // 0x0014538c: and $v1, $v1, $s6
    if (v0 == 0) goto label_0x1453a0;                           // 0x00145390: beqz $v0, 0x1453a0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00145394: sw $v1, 0($s3)
    func_0011d390();  // 0x11d378                                // 0x00145398: jal 0x11d378
    /* nop */                                                   // 0x0014539c: nop 
label_0x1453a0:
    g_10000000 = 0;  // Global at 0x10000000                    // 0x001453a0: sw $zero, 0($s7)
    a0 = 0x4000 << 16;                                          // 0x001453a4: lui $a0, 0x4000
    g_10000000 = 0;  // Global at 0x10000000                    // 0x001453a8: sw $zero, 0($fp)
    v1 = local_0;                                               // 0x001453b0: lw $v1, 0($sp)
    g_30000000 = a0;  // Global at 0x30000000                   // 0x001453b4: sw $a0, 0($v1)
    goto label_0x145448;                                        // 0x001453b8: b 0x145448
label_0x1453c0:
    v0 = (v0 < 0x1389) ? 1 : 0;                                 // 0x001453c0: slti $v0, $v0, 0x1389
    if (v0 != 0) goto label_0x1453e0;                           // 0x001453c4: bnez $v0, 0x1453e0
    t0 = t0 + 1;                                                // 0x001453c8: addiu $t0, $t0, 1
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x001453cc: lw $a0, 0x870($s0)
    func_00147d70();  // 0x147ca0                                // 0x001453d4: jal 0x147ca0
    /* FPU: addu.qb $zero, $sp, $t0 */                          // 0x001453d8: addu.qb $zero, $sp, $t0
    /* FPU: aver_u.h $w0, $w0, $w8 */                           // 0x001453dc: aver_u.h $w0, $w0, $w8
label_0x1453e0:
    if (a2 < 0) goto label_0x145360;                            // 0x001453e4: bltzl $a2, 0x145360
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001453e8: lw $v0, 0x10a0($s0)
label_0x1453ec:
    v0 = 0x1000 << 16;                                          // 0x001453ec: lui $v0, 0x1000
    a0 = 0x1000 << 16;                                          // 0x001453f0: lui $a0, 0x1000
    v0 = v0 | 0x2020;                                           // 0x001453f8: ori $v0, $v0, 0x2020
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001453fc: lw $v0, 0($v0)
    if (a0 >= 0) goto label_0x145420;                           // 0x00145408: bgez $a0, 0x145420
    *(uint32_t*)((s0) + 0x850) = v1;                            // 0x0014540c: sw $v1, 0x850($s0)
    v0 = v0 & 0x1f;                                             // 0x00145410: andi $v0, $v0, 0x1f
    v0 = -v0;                                                   // 0x00145414: negu $v0, $v0
    goto label_0x145424;                                        // 0x00145418: b 0x145424
    v0 = v0 & 0x1f;                                             // 0x0014541c: andi $v0, $v0, 0x1f
label_0x145420:
    v0 = 0x20;                                                  // 0x00145420: addiu $v0, $zero, 0x20
label_0x145424:
    *(uint32_t*)((s0) + 0x854) = v0;                            // 0x00145424: sw $v0, 0x854($s0)
    v0 = a2 & 0xffff;                                           // 0x00145430: andi $v0, $a2, 0xffff
    v1 = ((unsigned)v1 < (unsigned)1) ? 1 : 0;                  // 0x00145434: sltiu $v1, $v1, 1
    v0 = v0 << 0x10;                                            // 0x00145438: sll $v0, $v0, 0x10
    *(uint32_t*)((s0) + 0x134) = v1;                            // 0x0014543c: sw $v1, 0x134($s0)
    v0 = v0 >> 0x10;                                            // 0x00145440: sra $v0, $v0, 0x10
label_0x145448:
    return;                                                     // 0x0014546c: jr $ra
    sp = sp + 0xc0;                                             // 0x00145470: addiu $sp, $sp, 0xc0
}