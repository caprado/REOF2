void func_00172248() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172248: addiu $sp, $sp, -0x20
    v0 = 0x21 << 16;                                            // 0x0017224c: lui $v0, 0x21
    s0 = v0 + 0x578c;                                           // 0x00172258: addiu $s0, $v0, 0x578c
    s1 = 7;                                                     // 0x00172260: addiu $s1, $zero, 7
    v0 = g_0021578c;  // Global at 0x0021578c                   // 0x00172264: lw $v0, 0($s0)
label_0x172268:
    s0 = s0 + 4;                                                // 0x00172268: addiu $s0, $s0, 4
    if (v0 == 0) goto label_0x17227c;                           // 0x0017226c: beqz $v0, 0x17227c
    func_001722a0();  // 1722a0                                // 0x00172274: jal 0x1722a0
    /* nop */                                                   // 0x00172278: nop 
label_0x17227c:
    s1 = s1 + -1;                                               // 0x0017227c: addiu $s1, $s1, -1
    if (s1 >= 0) goto label_0x172268;                           // 0x00172280: bgezl $s1, 0x172268
    v0 = g_00215790;  // Global at 0x00215790                   // 0x00172284: lw $v0, 0($s0)
    return func_00173178();  // Tail call                        // 0x00172294: j 0x1730b8
    sp = sp + 0x20;                                             // 0x00172298: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017229c: nop 
    sp = sp + -0x20;                                            // 0x001722a0: addiu $sp, $sp, -0x20
    s0 = *(int32_t*)((s1) + 0x48);                              // 0x001722b8: lw $s0, 0x48($s1)
    v0 = s0 + -1;                                               // 0x001722bc: addiu $v0, $s0, -1
    v0 = ((unsigned)v0 < (unsigned)4) ? 1 : 0;                  // 0x001722c0: sltiu $v0, $v0, 4
    /* beqzl $v0, 0x1723a0 */                                   // 0x001722c4: beqzl $v0, 0x1723a0
    v0 = *(int32_t*)((s1) + 0x44);                              // 0x001722cc: lw $v0, 0x44($s1)
    /* beqzl $v0, 0x1723a0 */                                   // 0x001722d0: beqzl $v0, 0x1723a0
    *(uint32_t*)((s1) + 0x44) = 0;                              // 0x001722d8: sw $zero, 0x44($s1)
    func_0017e530();  // 17e530                                // 0x001722dc: jal 0x17e530
    /* nop */                                                   // 0x001722e0: nop 
    v0 = s0 + -2;                                               // 0x001722e8: addiu $v0, $s0, -2
    v0 = ((unsigned)v0 < (unsigned)3) ? 1 : 0;                  // 0x001722ec: sltiu $v0, $v0, 3
    /* beqzl $v0, 0x172304 */                                   // 0x001722f0: beqzl $v0, 0x172304
    s0 = *(int32_t*)((s1) + 0x48);                              // 0x001722f4: lw $s0, 0x48($s1)
    func_001723b8();  // 1723b8                                // 0x001722f8: jal 0x1723b8
    s0 = *(int32_t*)((s1) + 0x48);                              // 0x00172300: lw $s0, 0x48($s1)
    v0 = ((unsigned)s0 < (unsigned)7) ? 1 : 0;                  // 0x00172304: sltiu $v0, $s0, 7
    /* beqzl $v0, 0x172378 */                                   // 0x00172308: beqzl $v0, 0x172378
    *(uint32_t*)((s1) + 0x48) = s0;                             // 0x0017230c: sw $s0, 0x48($s1)
    v0 = s0 << 2;                                               // 0x00172310: sll $v0, $s0, 2
    v1 = 0x23 << 16;                                            // 0x00172314: lui $v1, 0x23
    v1 = v1 + v0;                                               // 0x00172318: addu $v1, $v1, $v0
    v1 = g_00229350;  // Global at 0x00229350                   // 0x0017231c: lw $v1, -0x6cb0($v1)
    /* jump to address in v1 */                                 // 0x00172320: jr $v1
    /* nop */                                                   // 0x00172324: nop 
    func_001723f8();  // 1723f8                                // 0x00172328: jal 0x1723f8
    goto label_0x172374;                                        // 0x00172330: b 0x172374
    func_00172428();  // 172428                                // 0x00172338: jal 0x172428
    goto label_0x172374;                                        // 0x00172340: b 0x172374
    func_00172788();  // 172788                                // 0x00172348: jal 0x172788
    goto label_0x172374;                                        // 0x00172350: b 0x172374
    func_00172828();  // 172828                                // 0x00172358: jal 0x172828
    goto label_0x172374;                                        // 0x00172360: b 0x172374
    func_00172898();  // 172898                                // 0x00172368: jal 0x172898
label_0x172374:
    *(uint32_t*)((s1) + 0x48) = s0;                             // 0x00172374: sw $s0, 0x48($s1)
    func_0017e530();  // 17e530                                // 0x00172378: jal 0x17e530
    s0 = s1 + 0x2b60;                                           // 0x0017237c: addiu $s0, $s1, 0x2b60
    return func_00177170();  // Tail call                        // 0x00172398: j 0x177130
    sp = sp + 0x20;                                             // 0x0017239c: addiu $sp, $sp, 0x20
    return;                                                     // 0x001723ac: jr $ra
    sp = sp + 0x20;                                             // 0x001723b0: addiu $sp, $sp, 0x20
}