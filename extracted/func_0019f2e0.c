/** @category graphics/memory @status complete @author caprado */
void func_0019f2e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019f2e0: addiu $sp, $sp, -0x10
    at = 0x29 << 16;                                            // 0x0019f2e4: lui $at, 0x29
    a0 = g_0028ffcc;  // Global at 0x0028ffcc                   // 0x0019f2ec: lw $a0, -0x34($at)
    v1 = *(int32_t*)((gp) + -0x64d8);                           // 0x0019f2f0: lw $v1, -0x64d8($gp)
    at = 0x29 << 16;                                            // 0x0019f2f4: lui $at, 0x29
    a0 = a0 + 1;                                                // 0x0019f2f8: addiu $a0, $a0, 1
    v0 = g_0028ffc4;  // Global at 0x0028ffc4                   // 0x0019f2fc: lw $v0, -0x3c($at)
    v1 = v1 + 1;                                                // 0x0019f300: addiu $v1, $v1, 1
    *(uint32_t*)((gp) + -0x64d8) = v1;                          // 0x0019f304: sw $v1, -0x64d8($gp)
    at = 0x29 << 16;                                            // 0x0019f308: lui $at, 0x29
    g_0028ffcc = a0;  // Global at 0x0028ffcc                   // 0x0019f30c: sw $a0, -0x34($at)
    at = 0x29 << 16;                                            // 0x0019f310: lui $at, 0x29
    v1 = g_0028ffcc;  // Global at 0x0028ffcc                   // 0x0019f314: lw $v1, -0x34($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x0019f318: slt $at, $v0, $v1
    if (at == 0) goto label_0x19f370;                           // 0x0019f31c: beqz $at, 0x19f370
    at = 0x29 << 16;                                            // 0x0019f320: lui $at, 0x29
    v0 = 1;                                                     // 0x0019f324: addiu $v0, $zero, 1
    v1 = g_0028ffd0;  // Global at 0x0028ffd0                   // 0x0019f328: lw $v1, -0x30($at)
    if (v1 != v0) goto label_0x19f370;                          // 0x0019f32c: bne $v1, $v0, 0x19f370
    /* nop */                                                   // 0x0019f330: nop 
    at = 0x29 << 16;                                            // 0x0019f334: lui $at, 0x29
    g_0028ffd0 = 0;  // Global at 0x0028ffd0                    // 0x0019f338: sw $zero, -0x30($at)
    at = 0x29 << 16;                                            // 0x0019f33c: lui $at, 0x29
    v1 = g_0028ffc8;  // Global at 0x0028ffc8                   // 0x0019f340: lw $v1, -0x38($at)
    at = 0x29 << 16;                                            // 0x0019f344: lui $at, 0x29
    v0 = g_0028ffc0;  // Global at 0x0028ffc0                   // 0x0019f348: lw $v0, -0x40($at)
    at = 0x29 << 16;                                            // 0x0019f34c: lui $at, 0x29
    v0 = v0 ^ 1;                                                // 0x0019f350: xori $v0, $v0, 1
    g_0028ffc4 = v1;  // Global at 0x0028ffc4                   // 0x0019f354: sw $v1, -0x3c($at)
    at = 0x29 << 16;                                            // 0x0019f358: lui $at, 0x29
    g_0028ffc0 = v0;  // Global at 0x0028ffc0                   // 0x0019f35c: sw $v0, -0x40($at)
    at = 0x29 << 16;                                            // 0x0019f360: lui $at, 0x29
    a0 = g_0028ffc0;  // Global at 0x0028ffc0                   // 0x0019f364: lw $a0, -0x40($at)
    func_001a0010();  // 1a0010                                // 0x0019f368: jal 0x1a0010
label_0x19f370:
    func_001a8930();  // 1a8930                                // 0x0019f370: jal 0x1a8930
    /* nop */                                                   // 0x0019f374: nop 
    /* memory sync */                                           // 0x0019f378: sync 
    return;                                                     // 0x0019f384: jr $ra
    sp = sp + 0x10;                                             // 0x0019f388: addiu $sp, $sp, 0x10
}