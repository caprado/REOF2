void func_001ccff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x32 << 16;                                            // 0x001ccff0: lui $at, 0x32
    v1 = 0x32 << 16;                                            // 0x001ccff4: lui $v1, 0x32
    a1 = g_003257d5;  // Global at 0x003257d5                   // 0x001ccff8: lbu $a1, 0x57d5($at)
    goto label_0x1cd038;                                        // 0x001cd000: b 0x1cd038
    v1 = v1 + 0x57d0;                                           // 0x001cd004: addiu $v1, $v1, 0x57d0
label_0x1cd008:
    v0 = v0 - a2;                                               // 0x001cd008: subu $v0, $v0, $a2
    v0 = v0 << 2;                                               // 0x001cd00c: sll $v0, $v0, 2
    a0 = v1 + v0;                                               // 0x001cd010: addu $a0, $v1, $v0
    v0 = *(uint8_t*)((a0) + 0x4c);                              // 0x001cd014: lbu $v0, 0x4c($a0)
    if (v0 == 0) goto label_0x1cd034;                           // 0x001cd018: beqz $v0, 0x1cd034
    /* nop */                                                   // 0x001cd01c: nop 
    v0 = *(int32_t*)((a0) + 0x74);                              // 0x001cd020: lw $v0, 0x74($a0)
    if (v0 == 0) goto label_0x1cd034;                           // 0x001cd024: beqz $v0, 0x1cd034
    v0 = 1;                                                     // 0x001cd028: addiu $v0, $zero, 1
    goto label_0x1cd048;                                        // 0x001cd02c: b 0x1cd048
    /* nop */                                                   // 0x001cd030: nop 
label_0x1cd034:
    a2 = a2 + 1;                                                // 0x001cd034: addiu $a2, $a2, 1
label_0x1cd038:
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x001cd038: slt $v0, $a2, $a1
    if (v0 != 0) goto label_0x1cd008;                           // 0x001cd03c: bnez $v0, 0x1cd008
    v0 = a2 << 4;                                               // 0x001cd040: sll $v0, $a2, 4
label_0x1cd048:
    return;                                                     // 0x001cd048: jr $ra
    /* nop */                                                   // 0x001cd04c: nop 
}