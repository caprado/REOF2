void func_00177808() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00177808: addiu $sp, $sp, -0x30
    s0 = s2 + 0x1aa0;                                           // 0x00177820: addiu $s0, $s2, 0x1aa0
    s3 = a1 << 2;                                               // 0x00177830: sll $s3, $a1, 2
    /* nop */                                                   // 0x00177834: nop 
label_0x177838:
    v0 = (s1 < 9) ? 1 : 0;                                      // 0x00177838: slti $v0, $s1, 9
label_0x17783c:
    if (v0 == 0) goto label_0x177880;                           // 0x0017783c: beqz $v0, 0x177880
    s1 = s1 + 1;                                                // 0x00177840: addiu $s1, $s1, 1
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00177844: lw $v0, 0xc($s0)
    s0 = s0 + 0x44;                                             // 0x00177848: addiu $s0, $s0, 0x44
    /* nop */                                                   // 0x0017784c: nop 
    /* nop */                                                   // 0x00177850: nop 
    if (v0 == 0) goto label_0x177838;                           // 0x00177854: beqz $v0, 0x177838
    v1 = s3 + v0;                                               // 0x00177858: addu $v1, $s3, $v0
    v0 = *(int32_t*)(v1);                                       // 0x0017785c: lw $v0, 0($v1)
    /* call function at address in v0 */                        // 0x0017786c: jalr $v0
    if (a0 == 0) goto label_0x17783c;                           // 0x00177878: beqz $a0, 0x17783c
    v0 = (s1 < 9) ? 1 : 0;                                      // 0x0017787c: slti $v0, $s1, 9
label_0x177880:
    return;                                                     // 0x00177898: jr $ra
    sp = sp + 0x30;                                             // 0x0017789c: addiu $sp, $sp, 0x30
}