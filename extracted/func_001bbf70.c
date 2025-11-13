/** @category: game/buffer @status: complete @author: caprado */
void func_001bbf70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = 0x31 << 16;                                            // 0x001bbf70: lui $a2, 0x31
    a2 = a2 + 0x37a0;                                           // 0x001bbf78: addiu $a2, $a2, 0x37a0
    a0 = a2 + a1;                                               // 0x001bbf7c: addu $a0, $a2, $a1
label_0x1bbf80:
    v1 = a1 << 1;                                               // 0x001bbf80: sll $v1, $a1, 1
    *(uint8_t*)((a0) + 0xe0) = 0;                               // 0x001bbf84: sb $zero, 0xe0($a0)
    v1 = a2 + v1;                                               // 0x001bbf88: addu $v1, $a2, $v1
    *(uint16_t*)((v1) + 0xe4) = 0;                              // 0x001bbf8c: sh $zero, 0xe4($v1)
    a1 = a1 + 1;                                                // 0x001bbf90: addiu $a1, $a1, 1
    v1 = (a1 < 4) ? 1 : 0;                                      // 0x001bbf94: slti $v1, $a1, 4
    if (v1 != 0) goto label_0x1bbf80;                           // 0x001bbf98: bnez $v1, 0x1bbf80
    a0 = a2 + a1;                                               // 0x001bbf9c: addu $a0, $a2, $a1
    return;                                                     // 0x001bbfa0: jr $ra
    /* nop */                                                   // 0x001bbfa4: nop 
}