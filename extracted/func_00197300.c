void func_00197300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00197300: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019730c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019731c: addu.qb $zero, $sp, $s1
    if (s4 >= 0) goto label_0x197330;                           // 0x00197324: bgez $s4, 0x197330
label_0x197330:
    v1 = *(int32_t*)((gp) + -0x6448);                           // 0x00197330: lw $v1, -0x6448($gp)
    v0 = s4 + a2;                                               // 0x00197334: addu $v0, $s4, $a2
    at = (v1 < v0) ? 1 : 0;                                     // 0x00197338: slt $at, $v1, $v0
    if (at == 0) goto label_0x19734c;                           // 0x0019733c: beqz $at, 0x19734c
    v0 = s4 + a2;                                               // 0x00197340: addu $v0, $s4, $a2
    a2 = v1 - s4;                                               // 0x00197344: subu $a2, $v1, $s4
    v0 = s4 + a2;                                               // 0x00197348: addu $v0, $s4, $a2
label_0x19734c:
    if (s3 >= 0) goto label_0x197358;                           // 0x0019734c: bgez $s3, 0x197358
    s1 = v0 + -1;                                               // 0x00197350: addiu $s1, $v0, -1
label_0x197358:
    v1 = *(int32_t*)((gp) + -0x644c);                           // 0x00197358: lw $v1, -0x644c($gp)
    v0 = s3 + a3;                                               // 0x0019735c: addu $v0, $s3, $a3
    at = (v1 < v0) ? 1 : 0;                                     // 0x00197360: slt $at, $v1, $v0
    if (at == 0) goto label_0x197370;                           // 0x00197364: beqz $at, 0x197370
    /* nop */                                                   // 0x00197368: nop 
    a3 = v1 - s3;                                               // 0x0019736c: subu $a3, $v1, $s3
label_0x197370:
    v1 = s3 + a3;                                               // 0x00197370: addu $v1, $s3, $a3
    v0 = 2;                                                     // 0x00197374: addiu $v0, $zero, 2
    if (s2 == v0) goto label_0x197394;                          // 0x00197378: beq $s2, $v0, 0x197394
    s0 = v1 + -1;                                               // 0x0019737c: addiu $s0, $v1, -1
    a0 = 0x30;                                                  // 0x00197380: addiu $a0, $zero, 0x30
    func_0018dca0();  // 0x18dc30                                // 0x00197384: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00197388: addiu $a1, $zero, 0x10
    goto label_0x1973a4;                                        // 0x0019738c: b 0x1973a4
    a3 = 2;                                                     // 0x00197390: addiu $a3, $zero, 2
label_0x197394:
    a0 = 0x40;                                                  // 0x00197394: addiu $a0, $zero, 0x40
    func_0018dca0();  // 0x18dc30                                // 0x00197398: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019739c: addiu $a1, $zero, 0x10
    a3 = 3;                                                     // 0x001973a0: addiu $a3, $zero, 3
label_0x1973a4:
    a0 = 0x7000 << 16;                                          // 0x001973a4: lui $a0, 0x7000
    v1 = 0x8000 << 16;                                          // 0x001973a8: lui $v1, 0x8000
    a0 = a3 + a0;                                               // 0x001973ac: addu $a0, $a3, $a0
    a1 = 0x1300 << 16;                                          // 0x001973b0: lui $a1, 0x1300
    a0 = a0 | v1;                                               // 0x001973b4: or $a0, $a0, $v1
    v1 = 0x5000 << 16;                                          // 0x001973bc: lui $v1, 0x5000
    a0 = a3 | v1;                                               // 0x001973c4: or $a0, $a3, $v1
    v1 = a3 + -1;                                               // 0x001973cc: addiu $v1, $a3, -1
    *(uint32_t*)((v0) + 8) = a1;                                // 0x001973d0: sw $a1, 8($v0)
    *(uint32_t*)((v0) + 0xc) = a0;                              // 0x001973d8: sw $a0, 0xc($v0)
    v1 = 0x1000 << 16;                                          // 0x001973dc: lui $v1, 0x1000
    v1 = 0 | 0x8000;                                            // 0x001973e8: ori $v1, $zero, 0x8000
    v1 = v1 | a0;                                               // 0x001973ec: or $v1, $v1, $a0
    a1 = a1 | v1;                                               // 0x001973f0: or $a1, $a1, $v1
    a0 = 0xe;                                                   // 0x001973f4: addiu $a0, $zero, 0xe
    v1 = 2;                                                     // 0x001973fc: addiu $v1, $zero, 2
    if (s2 == v1) goto label_0x1974fc;                          // 0x00197400: beq $s2, $v1, 0x1974fc
    v1 = 1;                                                     // 0x00197408: addiu $v1, $zero, 1
    if (s2 == v1) goto label_0x197490;                          // 0x0019740c: beq $s2, $v1, 0x197490
    if (s2 == 0) goto label_0x197424;                           // 0x00197414: beqz $s2, 0x197424
    goto label_0x1975a0;                                        // 0x0019741c: b 0x1975a0
label_0x197424:
    at = 0x29 << 16;                                            // 0x00197424: lui $at, 0x29
    g_002903b8 = s4;  // Global at 0x002903b8                   // 0x0019742c: sw $s4, 0x3b8($at)
    at = 0x29 << 16;                                            // 0x00197434: lui $at, 0x29
    g_002903bc = s3;  // Global at 0x002903bc                   // 0x0019743c: sw $s3, 0x3bc($at)
    at = 0x29 << 16;                                            // 0x00197448: lui $at, 0x29
    g_002903c0 = s1;  // Global at 0x002903c0                   // 0x00197454: sw $s1, 0x3c0($at)
    at = 0x29 << 16;                                            // 0x0019745c: lui $at, 0x29
    a2 = a2 | a0;                                               // 0x00197460: or $a2, $a2, $a0
    g_002903c4 = s0;  // Global at 0x002903c4                   // 0x00197468: sw $s0, 0x3c4($at)
    a1 = a1 | a2;                                               // 0x00197470: or $a1, $a1, $a2
    at = 0x29 << 16;                                            // 0x00197474: lui $at, 0x29
    a0 = a0 | a1;                                               // 0x00197478: or $a0, $a0, $a1
    v1 = 0x40;                                                  // 0x0019747c: addiu $v1, $zero, 0x40
    goto label_0x19759c;                                        // 0x00197488: b 0x19759c
label_0x197490:
    at = 0x29 << 16;                                            // 0x00197490: lui $at, 0x29
    g_002903d0 = s4;  // Global at 0x002903d0                   // 0x00197498: sw $s4, 0x3d0($at)
    at = 0x29 << 16;                                            // 0x001974a0: lui $at, 0x29
    g_002903d4 = s3;  // Global at 0x002903d4                   // 0x001974a8: sw $s3, 0x3d4($at)
    at = 0x29 << 16;                                            // 0x001974b4: lui $at, 0x29
    g_002903d8 = s1;  // Global at 0x002903d8                   // 0x001974c0: sw $s1, 0x3d8($at)
    at = 0x29 << 16;                                            // 0x001974c8: lui $at, 0x29
    a2 = a2 | a0;                                               // 0x001974cc: or $a2, $a2, $a0
    g_002903dc = s0;  // Global at 0x002903dc                   // 0x001974d4: sw $s0, 0x3dc($at)
    a1 = a1 | a2;                                               // 0x001974dc: or $a1, $a1, $a2
    at = 0x29 << 16;                                            // 0x001974e0: lui $at, 0x29
    a0 = a0 | a1;                                               // 0x001974e4: or $a0, $a0, $a1
    v1 = 0x41;                                                  // 0x001974e8: addiu $v1, $zero, 0x41
    goto label_0x19759c;                                        // 0x001974f4: b 0x19759c
label_0x1974fc:
    at = 0x29 << 16;                                            // 0x001974fc: lui $at, 0x29
    g_002903b8 = s4;  // Global at 0x002903b8                   // 0x00197504: sw $s4, 0x3b8($at)
    at = 0x29 << 16;                                            // 0x0019750c: lui $at, 0x29
    g_002903d0 = s4;  // Global at 0x002903d0                   // 0x00197514: sw $s4, 0x3d0($at)
    at = 0x29 << 16;                                            // 0x0019751c: lui $at, 0x29
    g_002903bc = s3;  // Global at 0x002903bc                   // 0x00197524: sw $s3, 0x3bc($at)
    a0 = a0 | v1;                                               // 0x00197528: or $a0, $a0, $v1
    at = 0x29 << 16;                                            // 0x0019752c: lui $at, 0x29
    g_002903c0 = s1;  // Global at 0x002903c0                   // 0x00197534: sw $s1, 0x3c0($at)
    at = 0x29 << 16;                                            // 0x0019753c: lui $at, 0x29
    g_002903d8 = s1;  // Global at 0x002903d8                   // 0x00197544: sw $s1, 0x3d8($at)
    a1 = v1 | a0;                                               // 0x00197548: or $a1, $v1, $a0
    at = 0x29 << 16;                                            // 0x0019754c: lui $at, 0x29
    g_002903d4 = s3;  // Global at 0x002903d4                   // 0x00197554: sw $s3, 0x3d4($at)
    at = 0x29 << 16;                                            // 0x0019755c: lui $at, 0x29
    g_002903c4 = s0;  // Global at 0x002903c4                   // 0x00197564: sw $s0, 0x3c4($at)
    a1 = v1 | a1;                                               // 0x00197568: or $a1, $v1, $a1
    at = 0x29 << 16;                                            // 0x0019756c: lui $at, 0x29
    a0 = 0x40;                                                  // 0x00197570: addiu $a0, $zero, 0x40
    g_002903dc = s0;  // Global at 0x002903dc                   // 0x00197574: sw $s0, 0x3dc($at)
    v1 = 0x41;                                                  // 0x00197578: addiu $v1, $zero, 0x41
    at = 0x29 << 16;                                            // 0x0019757c: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x00197584: lui $at, 0x29
label_0x19759c:
label_0x1975a0:
    a3 = 0x29 << 16;                                            // 0x001975a0: lui $a3, 0x29
    func_0018cff0();  // 0x18ce40                                // 0x001975b0: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x001975b4: addiu $a3, $a3, -0x350
    v0 = 1;                                                     // 0x001975bc: addiu $v0, $zero, 1
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001975c0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001975c8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001975cc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001975d0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001975d4: jr $ra
    sp = sp + 0x60;                                             // 0x001975d8: addiu $sp, $sp, 0x60
}