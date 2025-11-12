void func_001bef00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_50;
    
    sp = sp + -0x70;                                            // 0x001bef00: addiu $sp, $sp, -0x70
    a2 = 0xe8;                                                  // 0x001bef0c: addiu $a2, $zero, 0xe8
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001bef10: dpa.w.ph $ac0, $sp, $s3
    s2 = 0x31 << 16;                                            // 0x001bef18: lui $s2, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bef1c: addu.qb $zero, $sp, $s1
    s2 = s2 + 0x5fc0;                                           // 0x001bef20: addiu $s2, $s2, 0x5fc0
    func_00107d30();  // 0x107c70                                // 0x001bef28: jal 0x107c70
    v0 = 1;                                                     // 0x001bef30: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001bef34: lui $at, 0x31
    *(uint32_t*)((gp) + -0x6300) = 0;                           // 0x001bef38: sw $zero, -0x6300($gp)
    g_00315fd0 = v0;  // Global at 0x00315fd0                   // 0x001bef3c: sw $v0, 0x5fd0($at)
label_0x1bef40:
    func_001809f0();  // 0x180848                                // 0x001bef40: jal 0x180848
    /* nop */                                                   // 0x001bef48: nop 
    /* nop */                                                   // 0x001bef4c: nop 
    /* nop */                                                   // 0x001bef50: nop 
    if (v0 < 0) goto label_0x1bef40;                            // 0x001bef54: bltz $v0, 0x1bef40
    /* nop */                                                   // 0x001bef58: nop 
    s1 = sp + 0x54;                                             // 0x001bef60: addiu $s1, $sp, 0x54
    goto label_0x1befa8;                                        // 0x001bef64: b 0x1befa8
    s0 = sp + 0x58;                                             // 0x001bef68: addiu $s0, $sp, 0x58
label_0x1bef6c:
    v0 = s3 + 2;                                                // 0x001bef6c: addiu $v0, $s3, 2
    local_50 = v1;                                              // 0x001bef70: sw $v1, 0x50($sp)
    a0 = sp + 0x50;                                             // 0x001bef74: addiu $a0, $sp, 0x50
    *(uint32_t*)(s1) = v0;                                      // 0x001bef78: sw $v0, 0($s1)
    v1 = s3 << 8;                                               // 0x001bef7c: sll $v1, $s3, 8
    v0 = 0x31 << 16;                                            // 0x001bef80: lui $v0, 0x31
    *(uint32_t*)(s0) = 0;                                       // 0x001bef84: sw $zero, 0($s0)
    v0 = v0 + 0x5ec0;                                           // 0x001bef88: addiu $v0, $v0, 0x5ec0
    func_00180b58();  // 0x180ac8                                // 0x001bef8c: jal 0x180ac8
    a1 = v0 + v1;                                               // 0x001bef90: addu $a1, $v0, $v1
    a0 = s3 << 2;                                               // 0x001bef94: sll $a0, $s3, 2
    v1 = gp + -0x6300;                                          // 0x001bef98: addiu $v1, $gp, -0x6300
    v1 = v1 + a0;                                               // 0x001bef9c: addu $v1, $v1, $a0
    s3 = s3 + 1;                                                // 0x001befa0: addiu $s3, $s3, 1
    *(uint32_t*)(v1) = v0;                                      // 0x001befa4: sw $v0, 0($v1)
label_0x1befa8:
    v0 = g_00315fd0;  // Global at 0x00315fd0                   // 0x001befa8: lw $v0, 0x10($s2)
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x001befac: slt $v0, $s3, $v0
    if (v0 != 0) goto label_0x1bef6c;                           // 0x001befb0: bnez $v0, 0x1bef6c
    v1 = 2;                                                     // 0x001befb4: addiu $v1, $zero, 2
    func_00101e20();  // 0x101d28                                // 0x001befb8: jal 0x101d28
    a0 = gp + -0x6308;                                          // 0x001befbc: addiu $a0, $gp, -0x6308
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001befc8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001befcc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001befd0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001befd4: jr $ra
    sp = sp + 0x70;                                             // 0x001befd8: addiu $sp, $sp, 0x70
}