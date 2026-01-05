/** @category graphics/dma @status complete @author caprado */
void func_0018d2f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0018d2f0: addiu $sp, $sp, -0x40
    v1 = 0x29 << 16;                                            // 0x0018d2f4: lui $v1, 0x29
    at = 0x29 << 16;                                            // 0x0018d2fc: lui $at, 0x29
    v1 = v1 + -0x33c;                                           // 0x0018d304: addiu $v1, $v1, -0x33c
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018d308: addu.qb $zero, $sp, $s1
    s2 = 0x29 << 16;                                            // 0x0018d30c: lui $s2, 0x29
    g_0028fce4 = 0;  // Global at 0x0028fce4                    // 0x0018d314: sw $zero, -0x31c($at)
    at = 0x29 << 16;                                            // 0x0018d318: lui $at, 0x29
    g_0028fce8 = 0;  // Global at 0x0028fce8                    // 0x0018d31c: sw $zero, -0x318($at)
    at = 0x29 << 16;                                            // 0x0018d320: lui $at, 0x29
    a1 = g_00290374;  // Global at 0x00290374                   // 0x0018d324: lw $a1, 0x374($at)
    s0 = a1 << 2;                                               // 0x0018d328: sll $s0, $a1, 2
    a0 = a1 ^ 1;                                                // 0x0018d32c: xori $a0, $a1, 1
    at = 0x29 << 16;                                            // 0x0018d330: lui $at, 0x29
    v1 = v1 + s0;                                               // 0x0018d334: addu $v1, $v1, $s0
    g_00290374 = a0;  // Global at 0x00290374                   // 0x0018d338: sw $a0, 0x374($at)
    v1 = g_0028fcc4;  // Global at 0x0028fcc4                   // 0x0018d33c: lw $v1, 0($v1)
    if (v1 == 0) goto label_0x18d4a0;                           // 0x0018d340: beqz $v1, 0x18d4a0
    s2 = s2 + -0x350;                                           // 0x0018d344: addiu $s2, $s2, -0x350
    v0 = s0 + s2;                                               // 0x0018d348: addu $v0, $s0, $s2
    v1 = 0x29 << 16;                                            // 0x0018d34c: lui $v1, 0x29
    a1 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d350: lw $a1, 0($s2)
    v1 = v1 + 0x334;                                            // 0x0018d354: addiu $v1, $v1, 0x334
    a0 = *(int32_t*)((v0) + 0xc);                               // 0x0018d358: lw $a0, 0xc($v0)
    v0 = a1 << 2;                                               // 0x0018d35c: sll $v0, $a1, 2
    v0 = v1 + v0;                                               // 0x0018d360: addu $v0, $v1, $v0
    func_0018db00();  // 18db00                                // 0x0018d364: jal 0x18db00
    s1 = *(int32_t*)(v0);                                       // 0x0018d368: lw $s1, 0($v0)
    a0 = s0 + s2;                                               // 0x0018d36c: addu $a0, $s0, $s2
    v1 = 0xf000 << 16;                                          // 0x0018d370: lui $v1, 0xf000
    a0 = g_0022a414;  // Global at 0x0022a414                   // 0x0018d374: lw $a0, 0x24($a0)
    a0 = a0 << 2;                                               // 0x0018d378: sll $a0, $a0, 2
    a0 = v0 + a0;                                               // 0x0018d37c: addu $a0, $v0, $a0
    s0 = g_0022a3f0;  // Global at 0x0022a3f0                   // 0x0018d380: lw $s0, 0($a0)
    v1 = s0 & v1;                                               // 0x0018d384: and $v1, $s0, $v1
    v1 = (unsigned)v1 >> 0x1c;                                  // 0x0018d388: srl $v1, $v1, 0x1c
    at = ((unsigned)v1 < (unsigned)6) ? 1 : 0;                  // 0x0018d38c: sltiu $at, $v1, 6
    if (at == 0) goto label_0x18d4a0;                           // 0x0018d390: beqz $at, 0x18d4a0
    g_0028fcdc = s0;  // Global at 0x0028fcdc                   // 0x0018d394: sw $s0, 0x2c($s2)
    a0 = 0x23 << 16;                                            // 0x0018d398: lui $a0, 0x23
    v1 = v1 << 2;                                               // 0x0018d39c: sll $v1, $v1, 2
    a0 = a0 + -0x5c10;                                          // 0x0018d3a0: addiu $a0, $a0, -0x5c10
    v1 = v1 + a0;                                               // 0x0018d3a4: addu $v1, $v1, $a0
    v1 = g_f0000000;  // Global at 0xf0000000                   // 0x0018d3a8: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x0018d3ac: jr $v1
    /* nop */                                                   // 0x0018d3b0: nop 
    a3 = *(uint8_t*)(s1);                                       // 0x0018d3b4: lbu $a3, 0($s1)
    a1 = -0x41;                                                 // 0x0018d3b8: addiu $a1, $zero, -0x41
    v0 = -0x81;                                                 // 0x0018d3c0: addiu $v0, $zero, -0x81
    a1 = a3 & a1;                                               // 0x0018d3cc: and $a1, $a3, $a1
    a1 = a1 | a2;                                               // 0x0018d3d0: or $a1, $a1, $a2
    *(uint8_t*)(s1) = a1;                                       // 0x0018d3d4: sb $a1, 0($s1)
    a1 = *(uint8_t*)(s1);                                       // 0x0018d3d8: lbu $a1, 0($s1)
    v0 = a1 & v0;                                               // 0x0018d3dc: and $v0, $a1, $v0
    v0 = v0 | v1;                                               // 0x0018d3e0: or $v0, $v0, $v1
    iFlushCache();  // 0x114560                                 // 0x0018d3e4: jal 0x114560
    *(uint8_t*)(s1) = v0;                                       // 0x0018d3e8: sb $v0, 0($s1)
    func_001033b0();  // 1033b0                                // 0x0018d3f4: jal 0x1033b0
    goto label_0x18d4a4;                                        // 0x0018d3fc: b 0x18d4a4
    v0 = -0x201;                                                // 0x0018d408: addiu $v0, $zero, -0x201
    v1 = 2;                                                     // 0x0018d410: addiu $v1, $zero, 2
    a1 = *(int32_t*)((s0) + 0x80);                              // 0x0018d414: lw $a1, 0x80($s0)
    at = 0x1200 << 16;                                          // 0x0018d418: lui $at, 0x1200
    *(uint32_t*)((gp) + -0x64f0) = a1;                          // 0x0018d424: sw $a1, -0x64f0($gp)
    a1 = *(int32_t*)((s0) + 0x84);                              // 0x0018d428: lw $a1, 0x84($s0)
    *(uint32_t*)((gp) + -0x64ec) = a1;                          // 0x0018d42c: sw $a1, -0x64ec($gp)
    at = 0x1200 << 16;                                          // 0x0018d434: lui $at, 0x1200
    at = 0x1200 << 16;                                          // 0x0018d440: lui $at, 0x1200
    func_00114e28();  // 114e28                                // 0x0018d444: jal 0x114e28
    a3 = g_0028fce0;  // Global at 0x0028fce0                   // 0x0018d44c: lw $a3, 0x30($s2)
    v0 = 0 & 1;                                                 // 0x0018d450: andi $v0, $zero, 1
    a1 = -0x41;                                                 // 0x0018d454: addiu $a1, $zero, -0x41
    a2 = v0 << 6;                                               // 0x0018d458: sll $a2, $v0, 6
    v1 = v0 << 7;                                               // 0x0018d45c: sll $v1, $v0, 7
    v0 = -0x81;                                                 // 0x0018d464: addiu $v0, $zero, -0x81
    a3 = a3 | 1;                                                // 0x0018d468: ori $a3, $a3, 1
    g_0028fce0 = a3;  // Global at 0x0028fce0                   // 0x0018d46c: sw $a3, 0x30($s2)
    a3 = *(uint8_t*)(s1);                                       // 0x0018d470: lbu $a3, 0($s1)
    a1 = a3 & a1;                                               // 0x0018d474: and $a1, $a3, $a1
    a1 = a1 | a2;                                               // 0x0018d478: or $a1, $a1, $a2
    *(uint8_t*)(s1) = a1;                                       // 0x0018d47c: sb $a1, 0($s1)
    a1 = *(uint8_t*)(s1);                                       // 0x0018d480: lbu $a1, 0($s1)
    v0 = a1 & v0;                                               // 0x0018d484: and $v0, $a1, $v0
    v0 = v0 | v1;                                               // 0x0018d488: or $v0, $v0, $v1
    iFlushCache();  // 0x114560                                 // 0x0018d48c: jal 0x114560
    *(uint8_t*)(s1) = v0;                                       // 0x0018d490: sb $v0, 0($s1)
    func_001033b0();  // 1033b0                                // 0x0018d498: jal 0x1033b0
label_0x18d4a0:
label_0x18d4a4:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018d4a4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018d4a8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018d4ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018d4b0: jr $ra
    sp = sp + 0x40;                                             // 0x0018d4b4: addiu $sp, $sp, 0x40
}