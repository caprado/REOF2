void func_001471c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_28, local_2c, local_30;
    
    a3 = 0x3ff;                                                 // 0x001471c8: addiu $a3, $zero, 0x3ff
    sp = sp + -0x80;                                            // 0x001471cc: addiu $sp, $sp, -0x80
    /* divide: a2 / a3 -> hi:lo */                              // 0x001471d0: div $zero, $a2, $a3
    v0 = 0xf << 16;                                             // 0x001471d8: lui $v0, 0xf
    v0 = v0 | 0xfc00;                                           // 0x001471e0: ori $v0, $v0, 0xfc00
    v1 = 0xfff << 16;                                           // 0x001471e4: lui $v1, 0xfff
    v1 = v1 | 0xffff;                                           // 0x001471ec: ori $v1, $v1, 0xffff
    v0 = s0 + v0;                                               // 0x001471f4: addu $v0, $s0, $v0
    v0 = v0 & v1;                                               // 0x001471fc: and $v0, $v0, $v1
    /* beqzl $a3, 0x147208 */                                   // 0x00147200: beqzl $a3, 0x147208
    /* break (trap) */                                          // 0x00147204: break 0, 7
    v1 = 0x1000 << 16;                                          // 0x00147208: lui $v1, 0x1000
    local_28 = a2;                                              // 0x0014720c: sw $a2, 0x28($sp)
    local_2c = v0;                                              // 0x00147214: sw $v0, 0x2c($sp)
    a3 = sp + 0x20;                                             // 0x00147218: addiu $a3, $sp, 0x20
    local_24 = 0;                                               // 0x0014721c: sw $zero, 0x24($sp)
    v1 = v1 | 0x2010;                                           // 0x00147220: ori $v1, $v1, 0x2010
    local_20 = 0;                                               // 0x00147224: sw $zero, 0x20($sp)
    /* mflo $t0 */                                              // 0x00147228
    t0 = t0 + 1;                                                // 0x0014722c: addiu $t0, $t0, 1
    local_30 = t0;                                              // 0x00147230: sw $t0, 0x30($sp)
    /* nop */                                                   // 0x00147234: nop 
label_0x147238:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00147238: lw $v0, 0($v1)
    /* nop */                                                   // 0x0014723c: nop 
    /* nop */                                                   // 0x00147240: nop 
    /* nop */                                                   // 0x00147244: nop 
    /* nop */                                                   // 0x00147248: nop 
    if (v0 < 0) goto label_0x147238;                            // 0x0014724c: bltz $v0, 0x147238
    /* nop */                                                   // 0x00147250: nop 
    a1 = 0x14 << 16;                                            // 0x00147254: lui $a1, 0x14
    a0 = 3;                                                     // 0x00147258: addiu $a0, $zero, 3
    a1 = a1 + 0x7080;                                           // 0x0014725c: addiu $a1, $a1, 0x7080
    RemoveDmacHandler();  // 0x114000                           // 0x00147260: jal 0x114000
    v1 = 8;                                                     // 0x0014726c: addiu $v1, $zero, 8
    v0 = 0x1000 << 16;                                          // 0x00147270: lui $v0, 0x1000
    a0 = 3;                                                     // 0x00147274: addiu $a0, $zero, 3
    v0 = v0 | 0xe010;                                           // 0x00147278: ori $v0, $v0, 0xe010
    func_00114ef8();  // 114ef8                                // 0x0014727c: jal 0x114ef8
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00147280: sw $v1, 0($v0)
    func_0011d320();  // 11d320                                // 0x00147284: jal 0x11d320
    /* nop */                                                   // 0x00147288: nop 
    v1 = 0xfff << 16;                                           // 0x0014728c: lui $v1, 0xfff
    a0 = 0x1000 << 16;                                          // 0x00147290: lui $a0, 0x1000
    v1 = v1 | 0xffff;                                           // 0x00147294: ori $v1, $v1, 0xffff
    a0 = a0 | 0xb010;                                           // 0x00147298: ori $a0, $a0, 0xb010
    v1 = s0 & v1;                                               // 0x0014729c: and $v1, $s0, $v1
    a1 = 0x1000 << 16;                                          // 0x001472a0: lui $a1, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001472a4: sw $v1, 0($a0)
    a1 = a1 | 0xb020;                                           // 0x001472a8: ori $a1, $a1, 0xb020
    v1 = 0 | 0xffc0;                                            // 0x001472ac: ori $v1, $zero, 0xffc0
    a0 = 0x1000 << 16;                                          // 0x001472b0: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001472b4: sw $v1, 0($a1)
    a0 = a0 | 0xb000;                                           // 0x001472b8: ori $a0, $a0, 0xb000
    v1 = 0x100;                                                 // 0x001472bc: addiu $v1, $zero, 0x100
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001472c0: sw $v1, 0($a0)
    if (v0 == 0) goto label_0x1472d8;                           // 0x001472c4: beqz $v0, 0x1472d8
    v0 = 0x1000 << 16;                                          // 0x001472c8: lui $v0, 0x1000
    func_0011d378();  // 11d378                                // 0x001472cc: jal 0x11d378
    /* nop */                                                   // 0x001472d0: nop 
    v0 = 0x1000 << 16;                                          // 0x001472d4: lui $v0, 0x1000
label_0x1472d8:
    v1 = 0x7000 << 16;                                          // 0x001472d8: lui $v1, 0x7000
    v0 = v0 | 0x2000;                                           // 0x001472dc: ori $v0, $v0, 0x2000
    v1 = v1 | 0x3ff;                                            // 0x001472e0: ori $v1, $v1, 0x3ff
    g_10000000 = v1;  // Global at 0x10000000                   // 0x001472e4: sw $v1, 0($v0)
    a2 = 4;                                                     // 0x001472e8: addiu $a2, $zero, 4
    a0 = *(int32_t*)((s1) + 0x870);                             // 0x001472ec: lw $a0, 0x870($s1)
    func_00147c28();  // 147c28                                // 0x001472f4: jal 0x147c28
    local_0 = a2;                                               // 0x001472f8: sw $a2, 0($sp)
    a0 = local_24;                                              // 0x001472fc: lw $a0, 0x24($sp)
    v1 = local_30;                                              // 0x00147300: lw $v1, 0x30($sp)
    /* nop */                                                   // 0x00147304: nop 
label_0x147308:
    v0 = local_20;                                              // 0x00147308: lw $v0, 0x20($sp)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0014730c: slt $v0, $v0, $v1
    /* nop */                                                   // 0x00147310: nop 
    /* nop */                                                   // 0x00147314: nop 
    /* nop */                                                   // 0x00147318: nop 
    if (v0 != 0) goto label_0x147308;                           // 0x0014731c: bnez $v0, 0x147308
    /* nop */                                                   // 0x00147320: nop 
    if (a0 == 0) goto label_0x147338;                           // 0x00147324: beqz $a0, 0x147338
    a1 = 0x22 << 16;                                            // 0x0014732c: lui $a1, 0x22
    func_00148530();  // 148530                                // 0x00147330: jal 0x148530
    a1 = &str_00226870;  // "The size of work area is too small" // 0x00147334: addiu $a1, $a1, 0x6870
label_0x147338:
    v1 = 0x1000 << 16;                                          // 0x00147338: lui $v1, 0x1000
    v1 = v1 | 0x2010;                                           // 0x0014733c: ori $v1, $v1, 0x2010
label_0x147340:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00147340: lw $v0, 0($v1)
    /* nop */                                                   // 0x00147344: nop 
    /* nop */                                                   // 0x00147348: nop 
    /* nop */                                                   // 0x0014734c: nop 
    /* nop */                                                   // 0x00147350: nop 
    if (v0 < 0) goto label_0x147340;                            // 0x00147354: bltz $v0, 0x147340
    /* nop */                                                   // 0x00147358: nop 
    func_00114e90();  // 114e90                                // 0x0014735c: jal 0x114e90
    a0 = 3;                                                     // 0x00147360: addiu $a0, $zero, 3
    _EnableIntc();  // 0x114010                                 // 0x00147368: jal 0x114010
    a0 = 3;                                                     // 0x0014736c: addiu $a0, $zero, 3
    return;                                                     // 0x00147380: jr $ra
    sp = sp + 0x80;                                             // 0x00147384: addiu $sp, $sp, 0x80
}