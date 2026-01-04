/** @category: memory/allocation @status: complete @author: caprado */
// Note: func_001aef60 (reserveRegionMemory) starts at line 37 (0x1aef60)
void func_001aeef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 << 1;                                               // 0x001aeef0: sll $v0, $a0, 1
    at = 0x31 << 16;                                            // 0x001aeef4: lui $at, 0x31
    v1 = v0 + a0;                                               // 0x001aeef8: addu $v1, $v0, $a0
    v0 = 0x22 << 16;                                            // 0x001aeefc: lui $v0, 0x22
    a0 = 0x14;                                                  // 0x001aef00: addiu $a0, $zero, 0x14
    v0 = v0 + -0x4090;                                          // 0x001aef04: addiu $v0, $v0, -0x4090
    a2 = v0 + v1;                                               // 0x001aef08: addu $a2, $v0, $v1
    v1 = *(uint8_t*)(a2);                                       // 0x001aef0c: lbu $v1, 0($a2)
    v0 = 0xff00 << 16;                                          // 0x001aef10: lui $v0, 0xff00
    g_0031348c = v1;  // Global at 0x0031348c                   // 0x001aef14: sb $v1, 0x348c($at)
    at = 0x31 << 16;                                            // 0x001aef18: lui $at, 0x31
    a1 = *(uint8_t*)((a2) + 1);                                 // 0x001aef1c: lbu $a1, 1($a2)
    v1 = g_0031348c;  // Global at 0x0031348c                   // 0x001aef20: lbu $v1, 0x348c($at)
    at = 0x31 << 16;                                            // 0x001aef24: lui $at, 0x31
    v1 = v1 << 0x10;                                            // 0x001aef28: sll $v1, $v1, 0x10
    g_0031348d = a1;  // Global at 0x0031348d                   // 0x001aef2c: sb $a1, 0x348d($at)
    a1 = v1 | v0;                                               // 0x001aef30: or $a1, $v1, $v0
    at = 0x31 << 16;                                            // 0x001aef34: lui $at, 0x31
    v0 = g_0031348d;  // Global at 0x0031348d                   // 0x001aef38: lbu $v0, 0x348d($at)
    a2 = *(uint8_t*)((a2) + 2);                                 // 0x001aef3c: lbu $a2, 2($a2)
    at = 0x31 << 16;                                            // 0x001aef40: lui $at, 0x31
    v1 = v0 << 8;                                               // 0x001aef44: sll $v1, $v0, 8
    g_0031348e = a2;  // Global at 0x0031348e                   // 0x001aef48: sb $a2, 0x348e($at)
    v1 = a1 | v1;                                               // 0x001aef4c: or $v1, $a1, $v1
    at = 0x31 << 16;                                            // 0x001aef50: lui $at, 0x31
    v0 = g_0031348e;  // Global at 0x0031348e                   // 0x001aef54: lbu $v0, 0x348e($at)
    return func_001aefe0();  // Tail call                        // 0x001aef58: j 0x1aefd0
    a1 = v0 | v1;                                               // 0x001aef5c: or $a1, $v0, $v1
    v1 = 0x2b << 16;                                            // 0x001aef60: lui $v1, 0x2b
    a1 = 7;                                                     // 0x001aef64: addiu $a1, $zero, 7
    goto label_0x1aef84;                                        // 0x001aef68: b 0x1aef84
    v1 = v1 + -0x5708;                                          // 0x001aef6c: addiu $v1, $v1, -0x5708
label_0x1aef70:
    v0 = g_002aa8f8;  // Global at 0x002aa8f8                   // 0x001aef70: lw $v0, 0($v1)
    if (v0 != 0) goto label_0x1aef90;                           // 0x001aef74: bnez $v0, 0x1aef90
    /* nop */                                                   // 0x001aef78: nop 
    a1 = a1 + -1;                                               // 0x001aef7c: addiu $a1, $a1, -1
    v1 = v1 + -8;                                               // 0x001aef80: addiu $v1, $v1, -8
label_0x1aef84:
    /* nop */                                                   // 0x001aef84: nop 
    if (a1 >= 0) goto label_0x1aef70;                           // 0x001aef88: bgez $a1, 0x1aef70
    /* nop */                                                   // 0x001aef8c: nop 
label_0x1aef90:
    v0 = g_002aa8f4;  // Global at 0x002aa8f4                   // 0x001aef90: lw $v0, 4($v1)
    v0 = v0 + a0;                                               // 0x001aef94: addu $v0, $v0, $a0
    g_002aa8f4 = v0;  // Global at 0x002aa8f4                   // 0x001aef98: sw $v0, 4($v1)
    v1 = g_002aa8f4;  // Global at 0x002aa8f4                   // 0x001aef9c: lw $v1, 4($v1)
    v0 = *(int32_t*)((gp) + -0x63c4);                           // 0x001aefa0: lw $v0, -0x63c4($gp)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001aefa4: slt $at, $v0, $v1
    if (at == 0) goto label_0x1aefb4;                           // 0x001aefa8: beqz $at, 0x1aefb4
    /* nop */                                                   // 0x001aefac: nop 
    *(uint32_t*)((gp) + -0x63c4) = v1;                          // 0x001aefb0: sw $v1, -0x63c4($gp)
label_0x1aefb4:
    return func_0018da40();  // Tail call                       // 0x001aefb4: j 0x18da40
    /* nop */                                                   // 0x001aefb8: nop 
    /* nop */                                                   // 0x001aefbc: nop 
    return;                                                     // 0x001aefc0: jr $ra
    /* nop */                                                   // 0x001aefc4: nop 
}