void func_001d9ac0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d9ac0: addiu $sp, $sp, -0x50
    at = 0x31 << 16;                                            // 0x001d9ac4: lui $at, 0x31
    v0 = 0x20 << 16;                                            // 0x001d9ad4: lui $v0, 0x20
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d9ad8: addu.qb $zero, $sp, $s1
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d9ae4: lw $v1, 0x37fc($at)
    s1 = *(int32_t*)(a0);                                       // 0x001d9aec: lw $s1, 0($a0)
    a1 = v1 + v0;                                               // 0x001d9af0: addu $a1, $v1, $v0
    thunk_func_001a1c30();  // 0x1da600                          // 0x001d9af4: jal 0x1da600
    a0 = sp + 0x40;                                             // 0x001d9af8: addiu $a0, $sp, 0x40
    func_001922b0();  // 0x192230                                // 0x001d9afc: jal 0x192230
    a0 = sp + 0x40;                                             // 0x001d9b00: addiu $a0, $sp, 0x40
    *(uint32_t*)((s0) + 0x80c) = v0;                            // 0x001d9b04: sw $v0, 0x80c($s0)
    func_001b0e80();  // 0x1b0e30                                // 0x001d9b08: jal 0x1b0e30
    a0 = *(int32_t*)((s0) + 0x80c);                             // 0x001d9b0c: lw $a0, 0x80c($s0)
    func_00192dc0();  // 0x192d90                                // 0x001d9b10: jal 0x192d90
    a0 = *(int32_t*)((s0) + 0x80c);                             // 0x001d9b14: lw $a0, 0x80c($s0)
    *(uint16_t*)((s0) + 0x816) = v0;                            // 0x001d9b18: sh $v0, 0x816($s0)
    goto label_0x1d9b38;                                        // 0x001d9b1c: b 0x1d9b38
label_0x1d9b24:
    func_001b1000();  // 0x1b0fc0                                // 0x001d9b24: jal 0x1b0fc0
    /* nop */                                                   // 0x001d9b28: nop 
    *(uint32_t*)(s1) = v0;                                      // 0x001d9b2c: sw $v0, 0($s1)
    s2 = s2 + 1;                                                // 0x001d9b30: addiu $s2, $s2, 1
    s1 = s1 + 4;                                                // 0x001d9b34: addiu $s1, $s1, 4
label_0x1d9b38:
    v0 = *(uint16_t*)((s0) + 0x816);                            // 0x001d9b38: lhu $v0, 0x816($s0)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001d9b3c: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x1d9b24;                           // 0x001d9b40: bnez $v0, 0x1d9b24
    /* nop */                                                   // 0x001d9b44: nop 
    a1 = *(int32_t*)((s0) + 0x80c);                             // 0x001d9b48: lw $a1, 0x80c($s0)
    func_00193750();  // 0x193600                                // 0x001d9b4c: jal 0x193600
    a0 = *(int32_t*)(s0);                                       // 0x001d9b50: lw $a0, 0($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d9b58: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9b5c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d9b60: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d9b64: jr $ra
    sp = sp + 0x50;                                             // 0x001d9b68: addiu $sp, $sp, 0x50
}