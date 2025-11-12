void func_001f0f10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0xb0;                                            // 0x001f0f10: addiu $sp, $sp, -0xb0
    v0 = 0x8007 << 16;                                          // 0x001f0f14: lui $v0, 0x8007
    v1 = 0x8007 << 16;                                          // 0x001f0f1c: lui $v1, 0x8007
    fp = 0x10;                                                  // 0x001f0f24: addiu $fp, $zero, 0x10
    s7 = 0x8007 << 16;                                          // 0x001f0f2c: lui $s7, 0x8007
    s6 = 0x8007 << 16;                                          // 0x001f0f34: lui $s6, 0x8007
    s2 = 0x8007 << 16;                                          // 0x001f0f4c: lui $s2, 0x8007
    s1 = 0x4c;                                                  // 0x001f0f54: addiu $s1, $zero, 0x4c
    t0 = g_80074728;  // Global at 0x80074728                   // 0x001f0f58: lw $t0, 0x4728($v0)
    s0 = 1;                                                     // 0x001f0f5c: addiu $s0, $zero, 1
    local_0 = a1;                                               // 0x001f0f64: sw $a1, 0($sp)
    s3 = *(int32_t*)(t0);                                       // 0x001f0f6c: lw $s3, 0($t0)
    v0 = g_80074730;  // Global at 0x80074730                   // 0x001f0f70: lw $v0, 0x4730($v1)
    local_4 = a3;                                               // 0x001f0f74: sw $a3, 4($sp)
    /* call function at address in v0 */                        // 0x001f0f78: jalr $v0
    v1 = 0x8007 << 16;                                          // 0x001f0f80: lui $v1, 0x8007
    v0 = g_80074734;  // Global at 0x80074734                   // 0x001f0f88: lw $v0, 0x4734($v1)
    /* call function at address in v0 */                        // 0x001f0f8c: jalr $v0
    /* nop */                                                   // 0x001f0f94: nop 
label_0x1f0f98:
    v0 = g_80074748;  // Global at 0x80074748                   // 0x001f0f98: lw $v0, 0x4748($s6)
    v0 = s1 + v0;                                               // 0x001f0f9c: addu $v0, $s1, $v0
    v0 = g_80070008;  // Global at 0x80070008                   // 0x001f0fa0: lw $v0, 8($v0)
    /* beqzl $v0, 0x1f0fe8 */                                   // 0x001f0fa4: beqzl $v0, 0x1f0fe8
    s0 = s0 + 1;                                                // 0x001f0fa8: addiu $s0, $s0, 1
    if (s0 == s3) goto label_0x1f0fe8;                          // 0x001f0fac: beql $s0, $s3, 0x1f0fe8
    s0 = s0 + 1;                                                // 0x001f0fb0: addiu $s0, $s0, 1
    if (v0 != fp) goto label_0x1f0fd0;                          // 0x001f0fb4: bne $v0, $fp, 0x1f0fd0
    v0 = g_80074744;  // Global at 0x80074744                   // 0x001f0fb8: lw $v0, 0x4744($s7)
    v0 = g_80074740;  // Global at 0x80074740                   // 0x001f0fbc: lw $v0, 0x4740($s2)
    /* call function at address in v0 */                        // 0x001f0fc0: jalr $v0
    goto label_0x1f0fe8;                                        // 0x001f0fc8: b 0x1f0fe8
    s0 = s0 + 1;                                                // 0x001f0fcc: addiu $s0, $s0, 1
label_0x1f0fd0:
    /* call function at address in v0 */                        // 0x001f0fd0: jalr $v0
    v0 = g_80074740;  // Global at 0x80074740                   // 0x001f0fd8: lw $v0, 0x4740($s2)
    /* call function at address in v0 */                        // 0x001f0fdc: jalr $v0
    s0 = s0 + 1;                                                // 0x001f0fe4: addiu $s0, $s0, 1
label_0x1f0fe8:
    v0 = (s0 < 0x100) ? 1 : 0;                                  // 0x001f0fe8: slti $v0, $s0, 0x100
    if (v0 != 0) goto label_0x1f0f98;                           // 0x001f0fec: bnez $v0, 0x1f0f98
    s1 = s1 + 0x4c;                                             // 0x001f0ff0: addiu $s1, $s1, 0x4c
    v1 = 0x8007 << 16;                                          // 0x001f0ff4: lui $v1, 0x8007
    v0 = g_8007473c;  // Global at 0x8007473c                   // 0x001f0ff8: lw $v0, 0x473c($v1)
    /* call function at address in v0 */                        // 0x001f0ffc: jalr $v0
    v1 = 0x8007 << 16;                                          // 0x001f1004: lui $v1, 0x8007
    v0 = g_80074738;  // Global at 0x80074738                   // 0x001f1008: lw $v0, 0x4738($v1)
    /* call function at address in v0 */                        // 0x001f100c: jalr $v0
    /* nop */                                                   // 0x001f1010: nop 
    v1 = 0x8007 << 16;                                          // 0x001f1014: lui $v1, 0x8007
    v0 = g_8007472c;  // Global at 0x8007472c                   // 0x001f1018: lw $v0, 0x472c($v1)
    func_000743c8();  // BIOS/System - 0x743c8                  // 0x001f101c: jal 0x743c8
    g_80070000 = 0;  // Global at 0x80070000                    // 0x001f1020: sw $zero, 0($v0)
    v0 = 0x8007 << 16;                                          // 0x001f1024: lui $v0, 0x8007
    if (s4 <= 0) goto label_0x1f1060;                           // 0x001f1028: blez $s4, 0x1f1060
    a0 = g_80074778;  // Global at 0x80074778                   // 0x001f102c: lw $a0, 0x4778($v0)
    s1 = 0x8007 << 16;                                          // 0x001f1030: lui $s1, 0x8007
    a1 = local_4;                                               // 0x001f1034: lw $a1, 4($sp)
label_0x1f1038:
    v1 = s0 << 2;                                               // 0x001f1038: sll $v1, $s0, 2
    v0 = g_80074770;  // Global at 0x80074770                   // 0x001f103c: lw $v0, 0x4770($s1)
    s0 = s0 + 1;                                                // 0x001f1040: addiu $s0, $s0, 1
    v1 = v1 + a1;                                               // 0x001f1044: addu $v1, $v1, $a1
    /* call function at address in v0 */                        // 0x001f1048: jalr $v0
    a1 = g_80070000;  // Global at 0x80070000                   // 0x001f104c: lw $a1, 0($v1)
    v0 = (s0 < s4) ? 1 : 0;                                     // 0x001f1054: slt $v0, $s0, $s4
    if (v0 != 0) goto label_0x1f1038;                           // 0x001f1058: bnez $v0, 0x1f1038
    a1 = local_4;                                               // 0x001f105c: lw $a1, 4($sp)
label_0x1f1060:
    v0 = 0x4c;                                                  // 0x001f1060: addiu $v0, $zero, 0x4c
    v1 = 0x8007 << 16;                                          // 0x001f1064: lui $v1, 0x8007
    /* multiply: s3 * v0 -> hi:lo */                            // 0x001f1068: mult $ac2, $s3, $v0
    a1 = g_80074748;  // Global at 0x80074748                   // 0x001f106c: lw $a1, 0x4748($s6)
    a0 = g_80074778;  // Global at 0x80074778                   // 0x001f1070: lw $a0, 0x4778($v1)
    v1 = 0x8007 << 16;                                          // 0x001f1074: lui $v1, 0x8007
    a2 = g_8007476c;  // Global at 0x8007476c                   // 0x001f1078: lw $a2, 0x476c($v1)
    v0 = v0 + a1;                                               // 0x001f107c: addu $v0, $v0, $a1
    g_80070038 = a0;  // Global at 0x80070038                   // 0x001f1080: sw $a0, 0x38($v0)
    a1 = local_0;                                               // 0x001f1084: lw $a1, 0($sp)
    g_80070034 = s4;  // Global at 0x80070034                   // 0x001f1088: sw $s4, 0x34($v0)
    g_8007000c = s5;  // Global at 0x8007000c                   // 0x001f108c: sw $s5, 0xc($v0)
    g_80070030 = s5;  // Global at 0x80070030                   // 0x001f1090: sw $s5, 0x30($v0)
    g_80070014 = a1;  // Global at 0x80070014                   // 0x001f1094: sw $a1, 0x14($v0)
    g_8007001a = 0;  // Global at 0x8007001a                    // 0x001f1098: sh $zero, 0x1a($v0)
    g_80070018 = 0;  // Global at 0x80070018                    // 0x001f109c: sh $zero, 0x18($v0)
    g_80070024 = 0;  // Global at 0x80070024                    // 0x001f10a0: sw $zero, 0x24($v0)
    g_8007001c = 0;  // Global at 0x8007001c                    // 0x001f10a4: sw $zero, 0x1c($v0)
    /* call function at address in a2 */                        // 0x001f10a8: jalr $a2
    g_80070020 = 0;  // Global at 0x80070020                    // 0x001f10ac: sw $zero, 0x20($v0)
    v0 = 0x8007 << 16;                                          // 0x001f10b0: lui $v0, 0x8007
    v1 = g_80074768;  // Global at 0x80074768                   // 0x001f10b4: lw $v1, 0x4768($v0)
    /* call function at address in v1 */                        // 0x001f10b8: jalr $v1
    /* nop */                                                   // 0x001f10bc: nop 
    return;                                                     // 0x001f10ec: jr $ra
    sp = sp + 0xb0;                                             // 0x001f10f0: addiu $sp, $sp, 0xb0
}