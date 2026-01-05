void func_00145080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xc0;                                            // 0x00145080: addiu $sp, $sp, -0xc0
    v0 = 0x1000 << 16;                                          // 0x00145084: lui $v0, 0x1000
    v0 = v0 | 0x2000;                                           // 0x0014508c: ori $v0, $v0, 0x2000
    if (s4 >= 0) goto label_0x1451d4;                           // 0x001450c0: bgez $s4, 0x1451d4
    v0 = 0x1000 << 16;                                          // 0x001450c8: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x001450cc: ori $v0, $v0, 0x2010
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001450d0: lw $v1, 0($v0)
    v1 = v1 & 0x4000;                                           // 0x001450d4: andi $v1, $v1, 0x4000
    if (v1 != 0) goto label_0x1451d4;                           // 0x001450d8: bnez $v1, 0x1451d4
    v0 = 0x1000 << 16;                                          // 0x001450e0: lui $v0, 0x1000
    s3 = 0x1000 << 16;                                          // 0x001450e4: lui $s3, 0x1000
    local_0 = v0;                                               // 0x001450e8: sw $v0, 0($sp)
    s1 = 0x1000 << 16;                                          // 0x001450ec: lui $s1, 0x1000
    v0 = v0 | 0xb420;                                           // 0x001450f0: ori $v0, $v0, 0xb420
    s5 = 0x1000 << 16;                                          // 0x001450f4: lui $s5, 0x1000
    s6 = 0x1000 << 16;                                          // 0x001450f8: lui $s6, 0x1000
    s7 = 0xfffe << 16;                                          // 0x001450fc: lui $s7, 0xfffe
    fp = 0x1000 << 16;                                          // 0x00145100: lui $fp, 0x1000
    s2 = 0x1000 << 16;                                          // 0x00145104: lui $s2, 0x1000
    s0 = 0x1000 << 16;                                          // 0x00145108: lui $s0, 0x1000
    local_0 = v0;                                               // 0x0014510c: sw $v0, 0($sp)
    s3 = s3 | 0xf590;                                           // 0x00145110: ori $s3, $s3, 0xf590
    s1 = s1 | 0xf520;                                           // 0x00145114: ori $s1, $s1, 0xf520
    s5 = s5 | 0xb400;                                           // 0x00145118: ori $s5, $s5, 0xb400
    s6 = s6 | 0xb000;                                           // 0x0014511c: ori $s6, $s6, 0xb000
    s7 = s7 | 0xffff;                                           // 0x00145120: ori $s7, $s7, 0xffff
    fp = fp | 0xb020;                                           // 0x00145124: ori $fp, $fp, 0xb020
    s2 = s2 | 0x2010;                                           // 0x00145128: ori $s2, $s2, 0x2010
    s0 = s0 | 0x2000;                                           // 0x0014512c: ori $s0, $s0, 0x2000
    v0 = *(int32_t*)((a1) + 0x10a0);                            // 0x00145130: lw $v0, 0x10a0($a1)
    /* nop */                                                   // 0x00145134: nop 
    if (v0 == 0) goto label_0x145194;                           // 0x00145138: beqz $v0, 0x145194
    func_0011d320();  // 11d320                                // 0x00145140: jal 0x11d320
    /* nop */                                                   // 0x00145144: nop 
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00145148: lw $v1, 0($s1)
    a0 = 1 << 16;                                               // 0x0014514c: lui $a0, 1
    v1 = v1 | a0;                                               // 0x00145150: or $v1, $v1, $a0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00145154: sw $v1, 0($s3)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00145158: sw $zero, 0($s5)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x0014515c: sw $zero, 0($s6)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00145160: lw $v1, 0($s1)
    v1 = v1 & s7;                                               // 0x00145164: and $v1, $v1, $s7
    if (v0 == 0) goto label_0x145178;                           // 0x00145168: beqz $v0, 0x145178
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0014516c: sw $v1, 0($s3)
    func_0011d378();  // 11d378                                // 0x00145170: jal 0x11d378
    /* nop */                                                   // 0x00145174: nop 
label_0x145178:
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00145178: sw $zero, 0($fp)
    a0 = 0x4000 << 16;                                          // 0x0014517c: lui $a0, 0x4000
    v0 = local_0;                                               // 0x00145180: lw $v0, 0($sp)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00145184: sw $zero, 0($v0)
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00145188: sw $a0, 0($s2)
    goto label_0x1451d4;                                        // 0x0014518c: b 0x1451d4
label_0x145194:
    v0 = (v0 < 0x1389) ? 1 : 0;                                 // 0x00145194: slti $v0, $v0, 0x1389
    if (v0 != 0) goto label_0x1451b4;                           // 0x00145198: bnez $v0, 0x1451b4
    a0 = a0 + 1;                                                // 0x0014519c: addiu $a0, $a0, 1
    a0 = *(int32_t*)((a1) + 0x870);                             // 0x001451a0: lw $a0, 0x870($a1)
    func_00147ca0();  // 147ca0                                // 0x001451a4: jal 0x147ca0
    /* FPU: addu.qb $zero, $sp, $a1 */                          // 0x001451a8: addu.qb $zero, $sp, $a1
    /* FPU: aver_u.h $w0, $w0, $w5 */                           // 0x001451ac: aver_u.h $w0, $w0, $w5
label_0x1451b4:
    if (s4 >= 0) goto label_0x1451d4;                           // 0x001451b8: bgez $s4, 0x1451d4
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001451c0: lw $v0, 0($s2)
    v0 = v0 & 0x4000;                                           // 0x001451c4: andi $v0, $v0, 0x4000
    /* beqzl $v0, 0x145138 */                                   // 0x001451c8: beqzl $v0, 0x145138
    v0 = *(int32_t*)((a1) + 0x10a0);                            // 0x001451cc: lw $v0, 0x10a0($a1)
label_0x1451d4:
    return;                                                     // 0x001451fc: jr $ra
    sp = sp + 0xc0;                                             // 0x00145200: addiu $sp, $sp, 0xc0
}