/** @category: graphics/sync @status: complete @author: caprado */
void func_00114800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00114800: addiu $sp, $sp, -0x20
    local_0 = 0;                                                // 0x0011480c: sw $zero, 0($sp)
    sceSifDmaStat();  // 0x114650                               // 0x00114810: jal 0x114650
    a1 = sp | 8;                                                // 0x00114814: ori $a1, $sp, 8
    func_0011d320();  // 11d320                                // 0x00114818: jal 0x11d320
    /* nop */                                                   // 0x0011481c: nop 
    v1 = 0x1000 << 16;                                          // 0x00114820: lui $v1, 0x1000
    a0 = 4;                                                     // 0x00114824: addiu $a0, $zero, 4
    v1 = v1 | 0xf000;                                           // 0x00114828: ori $v1, $v1, 0xf000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x0011482c: sw $a0, 0($v1)
    /* memory sync */                                           // 0x00114830: sync 
    if (v0 == 0) goto label_0x114848;                           // 0x00114834: beqz $v0, 0x114848
    v1 = 0x1000 << 16;                                          // 0x00114838: lui $v1, 0x1000
    func_0011d378();  // 11d378                                // 0x0011483c: jal 0x11d378
    /* nop */                                                   // 0x00114840: nop 
    v1 = 0x1000 << 16;                                          // 0x00114844: lui $v1, 0x1000
label_0x114848:
    v1 = v1 | 0xf000;                                           // 0x00114848: ori $v1, $v1, 0xf000
    /* nop */                                                   // 0x0011484c: nop 
label_0x114850:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00114850: lw $v0, 0($v1)
    v0 = v0 & 4;                                                // 0x00114854: andi $v0, $v0, 4
    if (v0 != 0) goto label_0x11486c;                           // 0x00114858: bnez $v0, 0x11486c
    /* nop */                                                   // 0x0011485c: nop 
    v0 = local_0;                                               // 0x00114860: lw $v0, 0($sp)
    if (v0 == 0) goto label_0x114850;                           // 0x00114864: beqz $v0, 0x114850
    /* nop */                                                   // 0x00114868: nop 
label_0x11486c:
    func_0011d320();  // 11d320                                // 0x0011486c: jal 0x11d320
    /* nop */                                                   // 0x00114870: nop 
    v1 = 4;                                                     // 0x00114874: addiu $v1, $zero, 4
    at = 0x1001 << 16;                                          // 0x00114878: lui $at, 0x1001
    g_1000f000 = v1;  // Global at 0x1000f000                   // 0x0011487c: sw $v1, -0x1000($at)
    /* memory sync */                                           // 0x00114880: sync 
    if (v0 == 0) goto label_0x114894;                           // 0x00114884: beqz $v0, 0x114894
    /* nop */                                                   // 0x00114888: nop 
    func_0011d378();  // 11d378                                // 0x0011488c: jal 0x11d378
    /* nop */                                                   // 0x00114890: nop 
label_0x114894:
    return;                                                     // 0x0011489c: jr $ra
    sp = sp + 0x20;                                             // 0x001148a0: addiu $sp, $sp, 0x20
}