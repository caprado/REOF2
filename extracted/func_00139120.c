void func_00139120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00139120: addiu $sp, $sp, -0x50
    func_001413a8();  // 0x141390                                // 0x00139150: jal 0x141390
    if (s0 <= 0) goto label_0x139190;                           // 0x00139158: blez $s0, 0x139190
    a3 = 0x25 << 16;                                            // 0x00139160: lui $a3, 0x25
    t0 = a3 + 0x3b40;                                           // 0x00139164: addiu $t0, $a3, 0x3b40
label_0x139168:
    v0 = a2 << 2;                                               // 0x00139168: sll $v0, $a2, 2
    a2 = a2 + 1;                                                // 0x0013916c: addiu $a2, $a2, 1
    v1 = v0 + s2;                                               // 0x00139170: addu $v1, $v0, $s2
    v0 = v0 + t0;                                               // 0x00139174: addu $v0, $v0, $t0
    a0 = *(int32_t*)(v1);                                       // 0x00139178: lw $a0, 0($v1)
    a1 = (a2 < s0) ? 1 : 0;                                     // 0x0013917c: slt $a1, $a2, $s0
    if (a1 != 0) goto label_0x139168;                           // 0x00139180: bnez $a1, 0x139168
    *(uint32_t*)(v0) = a0;                                      // 0x00139184: sw $a0, 0($v0)
    goto label_0x139198;                                        // 0x00139188: b 0x139198
    s5 = 0x25 << 16;                                            // 0x0013918c: lui $s5, 0x25
label_0x139190:
    a3 = 0x25 << 16;                                            // 0x00139190: lui $a3, 0x25
    s5 = 0x25 << 16;                                            // 0x00139194: lui $s5, 0x25
label_0x139198:
    a0 = 0x20 << 16;                                            // 0x00139198: lui $a0, 0x20
    s2 = s5 + 0x3c40;                                           // 0x0013919c: addiu $s2, $s5, 0x3c40
    a0 = a0 + 0x2e70;                                           // 0x001391a4: addiu $a0, $a0, 0x2e70
    a1 = s3 + 0x400;                                            // 0x001391a8: addiu $a1, $s3, 0x400
    a3 = a3 + 0x3b40;                                           // 0x001391ac: addiu $a3, $a3, 0x3b40
    t0 = s0 << 2;                                               // 0x001391b0: sll $t0, $s0, 2
    t2 = s1 << 2;                                               // 0x001391b8: sll $t2, $s1, 2
    func_001178a0();  // 0x1176a8                                // 0x001391c0: jal 0x1176a8
    local_0 = 0;                                                // 0x001391c4: sw $zero, 0($sp)
    if (s1 <= 0) goto label_0x1391f8;                           // 0x001391c8: blez $s1, 0x1391f8
    /* nop */                                                   // 0x001391d4: nop 
label_0x1391d8:
    v0 = a2 << 2;                                               // 0x001391d8: sll $v0, $a2, 2
    a2 = a2 + 1;                                                // 0x001391dc: addiu $a2, $a2, 1
    v1 = v0 + t1;                                               // 0x001391e0: addu $v1, $v0, $t1
    v0 = v0 + s4;                                               // 0x001391e4: addu $v0, $v0, $s4
    a0 = *(int32_t*)(v1);                                       // 0x001391e8: lw $a0, 0($v1)
    a1 = (a2 < s1) ? 1 : 0;                                     // 0x001391ec: slt $a1, $a2, $s1
    if (a1 != 0) goto label_0x1391d8;                           // 0x001391f0: bnez $a1, 0x1391d8
    *(uint32_t*)(v0) = a0;                                      // 0x001391f4: sw $a0, 0($v0)
label_0x1391f8:
    func_001413c0();  // 0x1413a8                                // 0x001391f8: jal 0x1413a8
    /* nop */                                                   // 0x001391fc: nop 
    v0 = g_00253c40;  // Global at 0x00253c40                   // 0x00139200: lw $v0, 0x3c40($s5)
    return;                                                     // 0x00139220: jr $ra
    sp = sp + 0x50;                                             // 0x00139224: addiu $sp, $sp, 0x50
}