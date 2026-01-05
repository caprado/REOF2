/** @category game/frame @status complete @author caprado */
void func_001ae910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ae910: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x6360);                           // 0x001ae918: lw $v1, -0x6360($gp)
    if (v1 == 0) goto label_0x1ae938;                           // 0x001ae91c: beqz $v1, 0x1ae938
    /* nop */                                                   // 0x001ae920: nop 
    func_00195ea0();  // 195ea0                                // 0x001ae924: jal 0x195ea0
    /* nop */                                                   // 0x001ae928: nop 
    v1 = *(int32_t*)((gp) + -0x6360);                           // 0x001ae92c: lw $v1, -0x6360($gp)
    v1 = v1 + -1;                                               // 0x001ae930: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x6360) = v1;                          // 0x001ae934: sw $v1, -0x6360($gp)
label_0x1ae938:
    return;                                                     // 0x001ae93c: jr $ra
    sp = sp + 0x10;                                             // 0x001ae940: addiu $sp, $sp, 0x10
}